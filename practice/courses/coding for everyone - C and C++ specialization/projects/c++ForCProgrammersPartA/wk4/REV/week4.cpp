//
// Course:  coursera C++ For C Programmers, Part A
// Homework 3 for week 4
//


#include <iostream>
#include <fstream>
#include <cstddef>
#include <vector>
#include <iterator>
#include <string>
#include <ctime>
#include <cmath>
#include <set>
#include <list>

using namespace std;

// class: Edge
// Description: contains the distance/weight of the edge and destination vertex as the index
//
enum EdgeColor { NOCOLOR, RED, GREEN, BLUE };

class Edge { 
  public: 
    // Edge constructor
    Edge( int nodevalin, float distin ) : 
          index(nodevalin),
          dist(distin),
          color(NOCOLOR) 
          { } 

    inline int Getindex()  const { return this->index; } 
    inline float Getdist() const { return this->dist; } 
    inline void Setdist( float distance ) { dist = distance; } 


   private: 
       int index;   // the dest node value
       float dist;   // the edge distance
       EdgeColor color; // the edge color
}; 

// class: Vertex
// Description: contains the index of the Vertex and an adjaceny list of Edges 
//
class Vertex {
  friend class ShortestPath;
  public: 
    // constructor initialize the index the same as the array index
    Vertex( int nodeval ) : index(nodeval) { };

    int Getadjsize() { return this->adjedge_list.size(); } 

    // Method: Addvedge
    // Description: adds an edge to the adjacency list if not already there, 
    //              returns true if edge added, false of edge already there
    bool 
    Addvedge( int nodeval, float weight ) { 
            bool found = false; 

            for ( auto it_edge = this->adjedge_list.begin(); 
                   it_edge != this->adjedge_list.end() && !found; it_edge++ ) { 

                 if ( it_edge->Getindex() == nodeval ) {
                       found = true;
                 }
            }
            if ( !found ) { 
                Edge edgein( nodeval, weight);
                this->adjedge_list.push_back( edgein );
            } 
            return !found;
    } // end of Addvedge

    // Method: Delvedge
    // Description: deletes an edge to the adjacency list if there
    //              returns true if edge deleted
    
    bool 
    Delvedge( int nodeval ) { 
            bool found = false; 

            for ( auto it_edge = this->adjedge_list.begin(); 
                 it_edge != this->adjedge_list.end() && !found; it_edge++ ) { 

                 if ( it_edge->Getindex() == nodeval ) {
                       this->adjedge_list.erase( it_edge );
                       found = true;
                 }
            }
            return found;
    } // end Delvedge

    // Method: Isedge
    // Description: Returns true if the 'nodeval' vertex 
    //              is adjacent to this Vertex 
    
    bool 
    Isedge( int nodeval ) { 
            bool found = false; 

            for ( auto it_edge = this->adjedge_list.begin(); 
                   it_edge != this->adjedge_list.end() && !found; it_edge++ ) { 

                 if ( it_edge->Getindex() == nodeval ) {
                       found = true;
                 }
            }
            return found;
    } // end Isedge

        
    // Method: Getedgedist
    // Description: returns the distance of the Vertex from this Vertex
    //              If not found, returns -1

    float
    Getedgedist( int nodeval ) { 
            float retval = -1;
            bool found = false;

            for ( auto it_edge = this->adjedge_list.begin(); 
                   it_edge != this->adjedge_list.end() && !found; it_edge++ ) { 

                 if ( it_edge->Getindex() == nodeval ) {
                       retval = it_edge->Getdist(); 
                       found = true;
                 }
            }
            return retval;
    } // end Getdist

    // Method: Setedgedist
    // Description: Sets and Edge distance between this Vertex and the 'nodeval' Vertex with 'weight'
    //              If not found, returns false

    bool 
    Setedgedist( int nodeval , float weight ) { 
            bool found = false;

            for ( auto it_edge = this->adjedge_list.begin(); 
                   it_edge != this->adjedge_list.end() && !found; it_edge++ ) { 

                 if ( it_edge->Getindex() == nodeval ) {
                       it_edge->Setdist(weight); 
                       found = true;
                 }
            }

            return found;

    } // end Setedgedist
    


    // Method: overload << operator to print a Vertex
    // Description: Prints a Vertex and the adjacency list
    friend ostream& operator<<( ostream& os, const Vertex& vertexobj)    { 

           os << "V:" << vertexobj.index << " "; 

           // loop through adjacency list printing each neighbor and distance
           for ( auto adj_it : vertexobj.adjedge_list ) { 
                 os << "[" <<  adj_it.Getindex() << ", " 
                                        << adj_it.Getdist() << "] ";
           }

           os << "\n"; 
           return os; 
    } 

  private: 
    int index;  // the Vertex index of this node
    vector<Edge> adjedge_list; // a list of adjacency edges of type Edge 

}; // end of Vertex class   

// Function: Randomfloat
// Description: returns a float random number between [min,max]
//
inline float 
Randomfloat( const float min, const float max) {
    return  (max - min) * (static_cast<float> (rand()) / static_cast<float> (RAND_MAX)) + min;
} 

// class: Graph 
// Description: class that contains a  vector of Vertex classes

class Graph {
    friend class ShortestPath;
    public: 
       Graph(int numnodes) { for ( int i=0; i < numnodes; i++ ) { 
				Vertex vin(i);
                                this->vertex_list.push_back(vin);
                          } 
       }
       Graph() { } 

       Graph( std::string filename );

       // overload << operator to print graph
       // Description: used to print the graph for debugging primarily

       friend ostream& operator<<( ostream& os, const Graph& graphobj)    { 

            // iterate over all vertexes and print each one 
            // using Vertex class overload operator

            for( auto vert_it : graphobj.vertex_list  ) {  
                os <<  vert_it << "\n"; 
            } 
            return os;
       } 
       // Method: Addgraphedge
       // Description: Adds an edge from node 'x' to node 'y' 
       // in both directions with the same distance, 'd'
       // returns true if edge added. 
       bool 
       Addgraphedge( int x, int y, float d ) { 
            bool retval = false;

            if ( x >= 0 && x < vertex_list.size() && 
                 y >= 0 && y < vertex_list.size() ) { 

                 // add all edges in both directions with the same distance
                 vertex_list[x].Addvedge(y, d);
                 vertex_list[y].Addvedge(x, d);
                 retval=true; 
            }
            return retval;

       } //addgraphedge
               
      // Method: Delgraphedge
      // Description: deletes a graph edge in both directions 
      //              from 'x' to 'y' (if present). Returns true if deleted.
      bool 
      Delgraphedge( int x, int y ) { 
            bool retval = false;

            if ( x >= 0 && x < vertex_list.size() && 
                 y >= 0 && y < vertex_list.size() ) { 
                 if (vertex_list[x].Delvedge(y) ) {
                       retval = vertex_list[y].Delvedge(x);
                 } 
            } 
	    return retval;
      } 

      // Method: Adjacent
      // Description: tests if an from 'x' to 'y' exists and returns true if it does. 
      bool
      Adjacent( int x, int y ) { 
            bool retval = false;

            if ( x >= 0 && x < vertex_list.size() && 
                 y >= 0 && y < vertex_list.size() ) { 
                 retval = vertex_list[x].Isedge(y);
            } 
            return retval; 
      } 

      
      // Method: Getedgeval
      // Description: gets the value of the distance/weight of the edge from 'x' to 'y'
      //              returns -1 if there is no edge between 'x' and 'y'
   
      float
      Getedgeval( int x, int y) { 
            float retval = -1;

            if ( x >= 0 && x < vertex_list.size() && 
                 y >= 0 && y < vertex_list.size() ) { 
                 retval = vertex_list[x].Getedgedist(y);
            } 
            return retval; 
      } 

      // Method: Setedgeval
      // Description: sets the value of the distance/weight of the edge from 'x' to 'y'
      //              in both directions.  returns -1 if there is no edge between 'x' and 'y'

      bool
      Setedgeval( int x, int y, float weight ) { 
            bool retval = false;

            if ( x >= 0 && x < vertex_list.size() && 
                 y >= 0 && y < vertex_list.size() ) { 
                 if (vertex_list[x].Setedgedist(y, weight)) { 
                     retval = vertex_list[y].Setedgedist(x, weight); 
                 }  
            } 
            return retval; 
      } 


      //      Method: Gengraph
      // Description: Generates a graph of edge 'density', with 

      void                           
      Gengraph( const float density, 
                      const float start_drange, const float end_drange ) { 
                 // for each node, random generate to other nodes
                 // only generate for succeeding nodes
                 // add edge with random distance
            // all possible edges and use density

            float distance; // the edge distance/weight

            for ( int i = 0; i < vertex_list.size(); i++ ) { 

                for ( int j = i+1 ; j < vertex_list.size(); j++ ) { 

                    // test whether to generate a edge based on density
                    if ( density >= 1.0 ||  Randomfloat(0, 1) < density ) {

                           // get the random distance to add in the range
                           distance = Randomfloat( start_drange, end_drange );

                           // add the edge to the graph
                           this->Addgraphedge( i, j, distance);
                    } // end if density 
                }
            }
      } // end of Gengraph 

                  
      // Method: V() -  returns the number of vertices in the graph
      int V() { return this->vertex_list.size(); };

      // Method: E(): returns the number of edges in the graph

      int 
      E() {    int esize = 0; 
                   // iterate over each vertex and get the size of the adjacent nodes
                   for ( auto it_vert : vertex_list ) { 
                        esize = esize + it_vert.Getadjsize();
                   }
                   // since edges are in both directions, divide by two 
                   return esize/2;
      } 
             
                                           
   private: 
      vector<Vertex> vertex_list;         // the list of vertices/nodes
            
};  // end Graph class

// Function: Graph( string)  - constructor 
// Description: reads in a graph file lines of integers (i,j,weight).  
//              First line is the the number of vertices in the graph
//
Graph::Graph( std::string filename ) {

    int numvertex;

    ifstream graph_file(filename); 

    if ( graph_file ) { 
          graph_file >> numvertex;
    } 

    // initialize the vertices
    for ( int i=0; i < numvertex; i++ ) {
         Vertex vin(i);
         this->vertex_list.push_back(vin);
    } 

    int x, y; 
    float cost; // read cost in as a float, so cast is not needed

    // read in and add the edge list
    while (graph_file) { 

        graph_file >> x >> y >> cost; 

        Addgraphedge(x, y, cost);

    } // while graph file

    
} // end of filename Graph constructor 
        


// class: PQNode
// Description: an object that makes up the min heap/Priority queue 
// 
class PQNode { 
      public: 
         PQNode( int nodeval, float dist) : nodeval(nodeval), dist(dist) {};

         // overload less than comparison operator used by STL 'set' template 
         // to place and find in set of PQNode
         inline int Getnodeval() const { return this->nodeval; } 
         inline float Getnodedist() const { return this->dist; } 

         bool operator<( PQNode const &pqnode ) const
         {
             bool comp = false; 

              // return true if dist in p1 is less than distance p2
             if (this->dist < pqnode.dist ) { 
                  comp = true;  
             } else if (this->dist == pqnode.dist ) { 
                  comp = this->nodeval < pqnode.nodeval; 
             } 
             return comp; 
         } 
            
        // overload of == to test for the STL set 'find()' method
        //  

         bool operator==( PQNode const &pqnode ) const
         {
              // return true if the index/nodeval is equal
             return this->nodeval == pqnode.nodeval && this->dist == pqnode.dist; 

         } 
              
         // overload to print a PQNode
         // mainly used for debugging

         friend ostream& operator<<( ostream& os, const PQNode& pqnode)    { 
		os << "[" << pqnode.nodeval  << ", " << pqnode.dist << "]"; 
                return os;
         } 

     private: 
         int nodeval; // the vertex
         float dist;  // the current distance in the min_heap
}; 


// Function: printpq
// Description: iterates and prints the priority queue/minheap

void
printpq( std::set<PQNode> pq ) {

      cout << "print pq, size=" << pq.size() << "\n"; 

      for (auto itpq : pq) { 
          cout << itpq;
      }
      cout << "\n";
      return; 
} 


// class: DisjointSet
// Description:  keeps a set of disjoint sets for the Kruskel algorithm
// 
class DisjointSet { 
      public: 
         // Construct does a makeset on all nodes. 
         DisjointSet( int numnodes )  { 
                for (int i=0; i < numnodes; i++)  { 
                     // set parent to the same node as itself and set the rank to zero
                     this->setlist.push_back(make_pair( i, 0));
                } 
         } 

         // Function to get the parent of a node
         inline int Getparent(int nodeval) const { 
               int retval = -1; 
               if (nodeval > -1 && nodeval < this->setlist.size()  ) {
                    retval = this->setlist[nodeval].first; 
               } 
               return retval;
         } 

         // Function to get the rank of a node
         inline float Getrank(int nodeval) const { 
             int retval = -1; 
             if (nodeval > -1 && nodeval < this->setlist.size()  ) {
                    retval = this->setlist[nodeval].second; 
             } 
             return retval;
         } 

         // Method: Find
         // Description: finds the root node of a given nodeval node, 
         //              and updates all nodes to point to the root node
         // 
         int 
         Find( int nodeval ) { 
             int root = nodeval; 

             // keep traversing until the root node is found
             while ( this->setlist[root].first != root ) {
                    root = this->setlist[root].first; 
             } 

             // update all nodes in the path to point to the root

             int parent; 
             int x=nodeval; 
             // while we haven't found the root of a subtree
             // update all the members along the way to point directly to the root

             while ( this->setlist[x].first != root ) {
                  parent = this->setlist[x].first;
                  this->setlist[x].first = root;  
                  x = parent;  
             } 
           
             return root;

          } // end of Find method

          // Method: Union
          // Description: peforms a Union on the two sets with nodes x & y, returns true if a Union done
          //              returns false if the two nodes x & y are already in the same set
          bool 
          Union( int x, int y ) { 
               bool retval; 

               x = Find(x); 
               y = Find(y); 

               if ( x == y ) {

                    // x and y in the same set
                    retval = false; 

                } else {
                    int rankx, ranky; 
                    rankx = this->setlist[x].second;
                    ranky =  this->setlist[y].second; 

                    // x will always have the higher or equal rank of y

                    if (rankx < ranky ) {
                        swap(x,y); 
                    } 

                    this->setlist[y].first = x; 

                    if ( rankx == ranky ) { 
                             this->setlist[x].second++; 
                    } 
                    retval = true;      
                }     

                return retval; 

            } // end of Union

         friend ostream& operator<<( ostream& os, const DisjointSet& djs )    { 
                int i=0;
                for (auto it_djs : djs.setlist ) { 
		     os << "[" << i << ", " << it_djs.first << ", " << it_djs.second << "] "; 
                     i++; 
                } 
                os << "\n";
                return os;
         } 

     private: 
            vector<std::pair<int, int>> setlist;  // with 'pair' from STL, first = parent, second = rank
}; 



// Class: ShortestPath
// Description: implements Dijkstra's shortest path algorithm along with methods to 
//              help with the making the stack and retrieve the cost of the path

class ShortestPath { 
     public:      
          void
          Vertices(Graph G) { 
             // list of vertices
             cout << G; 
          } 

          const int UNDEF = -1;

          // Method: Path
          // Description: Uses Dijkstra's shortest path algorithm and returns a vertice list of the shortest path
          //              Uses a set template out of the C++ STL with PQNode for a minheap implementation
          //              returns the sequence of vertices representing shorest path start-v1-v2-â€¦-vn-target.
          
          list<int>
          Path( Graph G, int source, int target )  { 

                  // u = vertex in Q with min dist[u] search for the vertex in u in the set Q 
                  //     that has the least dist[u]
       
                  // dist[u] is the current distance from source to the vertex u
                  vector<float> dist(G.V(), INFINITY); 

                  // prev array contains pointer to the previous-hop nodes on the 
                  vector<int>   prev(G.V(), UNDEF); 

                  float alt; 
                  int u, v; 

                  /* use a STL sorted set for the priority queue  */
                  std::set<PQNode> pq; 

                  dist[source] = 0;

                  for (int i=0; i<G.V(); i++) {
                    //  cout << "(" << i << ", " << dist[i] << ") "; 
                      pq.insert( pq.begin(),  PQNode(i, dist[i]));
                  } 

                  // cout << "\n";
                  // printpq(pq);

                  bool targetfound = false; 

                  while (!pq.empty() && !targetfound)  { 

                        std::set<PQNode>::iterator  pqit; // iterator for the priority queue set

                        pqit = pq.begin();

                        u = pqit->Getnodeval(); 

                        if ( u == target ) { 
                           // the lowest element is the target so a shortest path is found
                           targetfound = true; 
                        } else { 
                           // pop the lowest dist element on the minheap
                           pq.erase(pqit);

                           // for all adjacent nodes to vertex u with an iterator over the vertex list

                           for( auto vedgeit : G.vertex_list[u].adjedge_list  ) { 
                                v = vedgeit.Getindex();
                                // find the element in the set

                                pqit = pq.find( PQNode(v, dist[v] )  );
                           

                                // if the vertex is still in Q, see if the distance is less
                                // u = vertex in Q with min dist[u] search for the vertex in u in the set Q 
                                //     that has the least dist[u]

                                // if the pq.find() didn't reach the end, it means that the adjacent vertex
                                // is in the priority queue
                                if (pqit != pq.end() ) { 

                                    alt = dist[u] + vedgeit.Getdist(); 

                                    // if the new distance is less than the existing one from u to v, 
                                    // update  the minheap and path hop vector
                                    if (alt < dist[v] ) {  
                                         dist[v] = alt; 
                                         // change distance of node v in pq (decrease key)

                                         // to change the value in the minheap/set, remove the node and reinsert
                                         // with new distance value
                                         pq.erase( pqit);            // remove v
                                         pq.insert( PQNode(v,alt)); // change value to alt and insert v

                                         prev[v] = u;

                                    } //  end of if alt < 
                               } // end of if pqit != 
                           } // end of for auto vedgit
                        } // if u==target else 
                  } // while 

                  return Makepath( prev, source, target);

          } // end of Path method

          //  method : Path_size(G, u, w):
          //  return the path cost associated with the shortest path from a shortest path list
          //  returns -1 if there is no path  (empty set or only one entry) 

          float
          Path_size( Graph G, list<int> sp_list ) {  
                float cost = -1; 
                int node1;
              
                // must have at least two entries in the path list (an edge)

                if ( sp_list.size() > 1 ) { 
                    cost = 0; 
                    node1 = sp_list.front(); // get value of first member
                    sp_list.pop_front();  // remove first member

		    for ( auto itsp : sp_list ) {
                         cost += G.Getedgeval( node1, itsp );
                         node1 = itsp; 
                    }                
                } 
                return cost; 
                                       
          } // end of Path_size method
                  

          //  method : Path_size(G):
          //  return the total path cost associated in the given Graph

          float
          Path_cost( Graph G ) {  
                float totcost = 0; 
                for (auto v_it : G.vertex_list ) { 

                     for ( auto vadj_it : v_it.adjedge_list) { 
                           if ( v_it.index < vadj_it.Getindex() ) { 
                                 totcost += vadj_it.Getdist();
                           } 
                     } 
                 } 
                 return totcost; 
                                       
          } // end of Path_cost method
                
          // Function: MST_Prim
          // Description: finds a minimum spanning tree of the input Graph and returns a list of edges and the cost
  	  // MST_Prim( Graph G, int start_vertex )
          // 
          // init a heap of all adjacent vertex edged to the the start node, add vertex to the forest
          //    find min cost edge, add to spanning tree
          //         add the min-cost vertex to the forest, 
          //              add all other adjacent edges to the added vertex that aren't in the forest
          // 
                
          Graph 
          MST_Prim ( Graph G, int start_node ) { 
                 std::set<int> vForest; // current list Vertices in the spanning tree 
                 std::set<int> vQ;      // current list of Vertices not visited

                 vector<std::pair<int, int>> edge(G.V(), std::make_pair(-1, -1));   // edge associated with cost vecro

                 vector<float> cost(G.V(), INFINITY);     // cost vector

                 std::set<PQNode> cost_pq;  // a priority queue of lowest cost to a given vertex (that are in Q/unvisited)

                  // prev array contains pointer to the previous-hop nodes on the 

                 Graph G_MST(G.V()); // init the MST graph 

                 cost[start_node] = 0.0; 

                 for (int i=0; i < G.V(); i++ ) { 
                       cost_pq.insert( PQNode(i, cost[i]));
                       vQ.insert(i); 
                 } 

                 while ( ! vQ.empty() ) { 
                         // add edges of lastvisted to edge heap that are not to nodes in vForest
                                                  
                         // get the lowest cost new vertex (is still in Q and cost_pq)
                         auto cost_it = cost_pq.begin(); 
                        
                         int v = cost_it->Getnodeval(); 
                         float c = cost_it->Getnodedist(); 

                         cost_pq.erase( PQNode(v,c) ); 

                         // remove it from Q (unvisited nodes)

                         vQ.erase(v); 

                 for (auto it = vQ.begin(); it != vQ.end(); it++ )

                         // insert into the forest (visited nodes)
                         vForest.insert(v);

                         auto vadjlist = G.vertex_list[v].adjedge_list;

                         // loop through all edges of the newest node 
                         // and look for nodes still not visited and with 
                         // lower cost from the node being visited

                         for( auto vedge_it : vadjlist ) { 

                              auto w = vedge_it.Getindex(); 
                              auto newcost  = vedge_it.Getdist(); 

                              // if node not in the forest and lower cost
                              if ( vForest.find(w) == vForest.end() && 
                                       newcost < cost[w]  ) { 
                                      			            	
                                       // need to remove the current one and replace/change cost
                                       cost_pq.erase( PQNode( w, cost[w] ) );  

				       cost[w] = newcost;

                                       // change the edge on the heap to the new cost
                                       cost_pq.insert( PQNode( w, newcost ) );  

				       edge[w] = std::make_pair( v, w );
					
                              } 
                         } 


                 } // end while 
                 
                 // loop through the edge pairs and add the edges with cost to the MST Graph

                 float totcost = 0;
                 for (int i = 0; i < G.V(); i++ ) { 
                        if ( edge[i] != make_pair( -1, -1) ) { 
                             G_MST.Addgraphedge( edge[i].first, edge[i].second, cost[i] );
                             totcost += cost[i]; 
                        } 
                  } 
			
                
                 cout << "span tree num edges:" << G_MST.E()  << " start node:" << start_node;
                 cout << " total cost:" << totcost << "\n" ; 

                 return ( G_MST );

         } // end of MST_prim 

         Graph MST_Kruskal( Graph G );

         private: 

          // Function: Makepath
          // returns a list of the shortest path 
          // by making a stack traversing from the target to the source

          list<int> 
          Makepath( vector<int> prev, int source, int target )  {
                list<int> S; 
                int u = target;
                if ( prev[u] != UNDEF || u == source ) { 
                      while (u != UNDEF) { 
                             S.push_front(u); 
                             u = prev[u]; 
                      }
                } 
                return S;
                          
          } //end of Makepath
                 
}; // end of Shortest path class 



struct Edgenode { 
     float dist;
     int x; 
     int y; 
}; 
// Function: Compedge
//  
bool
Compedge ( const Edgenode& edge1, const Edgenode edge2 ) { 
        return (edge1.dist < edge2.dist);
} 


// Function: MST_Kruskal
// Description:  finds minimum spanning tree using the Kruskal algorithm
// 
// 

Graph
ShortestPath::MST_Kruskal( Graph G ) { 

           Graph G_MST(G.V()); 

           DisjointSet dju(G.V());                  

           list<Edgenode> edgelist; 

            // create a list of edges
            for (auto v_it : G.vertex_list ) { 

                 for ( auto vadj_it : v_it.adjedge_list) { 
                       if ( v_it.index < vadj_it.Getindex() ) { 
                            edgelist.push_back( { vadj_it.Getdist(),  v_it.index, vadj_it.Getindex() } );
                       } 
                 } 
            } 
                
           // sort the list of edges (by ascending distance/cost) 
           edgelist.sort(Compedge);

           // add edges together if part of disjoint sets
           for (auto edgeit : edgelist ) { 
                   // the Union function does a find on x and y and returns true if 
                   // the roots a different, which means the edge can be added to the MST

                   if (dju.Union(edgeit.x, edgeit.y )) { 
                       G_MST.Addgraphedge( edgeit.x, edgeit.y, edgeit.dist );
                   } 
           } 

           return (G_MST); 

 } // end of MST_Kruskal

// Function: Printgraphstats
// Description: Prints a given graph's statistics (number of vertices, number of edges, edge density)
void
Printgraphstats( Graph G )
{ 
     int numvert = G.V();
     int numedge = G.E(); 

     cout << "Graph Stats\n";
     cout << "number of vertices: " << numvert <<  "\nnumber of edges: " << numedge  << '\n'; 

     // fully connected graph number of edges forumula is (n * (n-1))/2 
     // where n is the number of nodes/vertices

     float percentgen = 0;

     if ( numedge > 0 ) { 
               percentgen = static_cast<float>(G.E()) / ((numvert * (numvert -1 ))/2 );
     } 
     cout << "edge density : " << percentgen << '\n';

} 


void
RunGraphsim( int numvertex, float density, float start_edge_range, float end_edge_range)  
{ 
     Graph G (numvertex);     
     
     G.Gengraph(density, start_edge_range, end_edge_range); 

     ShortestPath SP;
     list<int> shortpathlist; 
     float pathcost, totcost=0;
     int startnode=0, numpaths=0;  

     // for all vertices except the start node, calculate the shortest path

     for (int i=0; i<G.V(); i++) { 

           // startnode can be any node in the graph so skip the startnode as the dest 
           if (i != startnode )  { 
                 shortpathlist  = SP.Path(G, startnode, i );        
                 pathcost = SP.Path_size(G, shortpathlist );
                 if ( pathcost > 0 ) { 
                      totcost += pathcost;
                      numpaths++; 
                 } 
           } 
     } // end for 

     Printgraphstats(G);

     cout << "\nGraph Sim Stats\n";
     cout << "input density:" << density << "\n";
     cout << "input edge range: [ " << start_edge_range << ", " << end_edge_range << " ]\n";
     cout << "total cost :" << totcost << "\n";
     cout << "number of paths :" << numpaths << "\n";
     if (numpaths > 0) { 
         cout << "average cost:" << totcost/numpaths << "\n";
     } 
     cout << "\n";

     return;

} // end of RunGraphsim

// Function: Runtestcase
// Description: Runs a small test case with known output to test Dijkstra's SP Algorithm is working
//
void 
Runtestcase() { 

   Graph G(7);
   G.Addgraphedge( 0, 1, 2); 
   G.Addgraphedge( 0, 2, 6); 
   G.Addgraphedge( 2, 3, 8); 
   G.Addgraphedge( 1, 3, 5); 
   G.Addgraphedge( 3, 5, 15); 
   G.Addgraphedge( 3, 4, 10); 
   G.Addgraphedge( 4, 5, 6); 
   G.Addgraphedge( 5, 6, 6); 
   G.Addgraphedge( 4, 6, 2); 

   Printgraphstats(G);
   
   ShortestPath SP;
   list<int> shortpathlist; 

  for (int i = 1; i < G.V(); i++) { 
     shortpathlist  = SP.Path(G, 0, i );        

     cout << "Shorthest path:";
     char sepchar = ' ';
     for (auto spl_it : shortpathlist ) {
       cout << sepchar << spl_it;  
       sepchar = '-';
     } 
     cout << "\n";
   } 

} // end Runtestcase

int main() 
{ 
     const float start_range = 1.0;
     const float end_range = 10.0; 
     const int numvertex = 50;
     float edgedensity=.5; 

     ShortestPath SP;

     const std::string GRAPHINPUTFILE = "data.txt"; 

     srand(time(0));

     Graph G(GRAPHINPUTFILE); 

     cout << "Input Graph from file: " << GRAPHINPUTFILE << "\n"; 

     
     // cout << G << "\n";

     Printgraphstats(G);

     // start at the middle node with Prim
     // but could start with any node
     Graph GP = SP.MST_Prim(G, G.V()/2 );

     cout << "Spaning Tree Prim\n";

     cout << GP << "\n";

     Printgraphstats(GP);

     Graph GK = SP.MST_Kruskal(G);

     cout << "Spaning Tree Kruskal\n";

     cout << GK << "\n";

     cout << "Input Graph Pathcost:" << SP.Path_cost(G) << "\n";
     cout << "Prim MST Pathcost:" << SP.Path_cost(GP) << "\n";
     cout << "Kruskal MST Pathcost:" << SP.Path_cost(GK) << "\n";

/* Uncomment to generate a random graph and run MST Prim and Kruskal
     Graph Gsim(numvertex);

     Gsim.Gengraph(edgedensity, start_range, end_range );  

     Graph GPsim = SP.MST_Prim(Gsim, 0 ); 
     cout << GPsim << "\n";

     Graph GKsim = SP.MST_Prim(Gsim, 0 ); 
     cout << GKsim << "\n";

     cout << "Sim Graph Pathcost:" << SP.Path_cost(Gsim) << "\n";
     cout << "Prim MST Pathcost:" << SP.Path_cost(GPsim) << "\n";
     cout << "Kruskal MST Pathcost:" << SP.Path_cost(GKsim) << "\n";
*/    

} // end main 