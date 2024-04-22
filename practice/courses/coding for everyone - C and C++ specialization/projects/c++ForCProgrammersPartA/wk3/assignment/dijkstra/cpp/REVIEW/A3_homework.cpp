#include <cstdlib>
#include <iostream>
#include <ctime>
#include <chrono>

#include <utility>
#include <set>
#include <map>
#include <queue>

#include <limits>

using namespace std ;
using namespace std::chrono ;

const double inf = numeric_limits<double>::infinity() ;

unsigned int my_seed() {
    auto aux = system_clock::now().time_since_epoch() ;
    return static_cast<unsigned int>(duration_cast<milliseconds>(aux).count()) ;
}

double drand(double min_val = 0.0, double max_val = 1.0) {
    // an implementation of a random uniform double between min_val and max_val
    double x = static_cast<double>(rand()) / RAND_MAX ; // random value in [0, 1)
    return min_val + (max_val - min_val) * x ;
}

class Graph {
    public:
        Graph(int n, double p = 0.0, double min_weight = 1.0, double max_weight = 10.0,
              unsigned int seed = 0): n(n) {
            // Create an undirected simple graph of certain size (number of nodes) n,
            // with random edges of expected density p,
            // each with random weight uniform between min_weight and max_weight.
            // The random seed can be given, but when 0 (the default), is taken pseudorandomly itself.

            if (n < 0 || p < 0.0 || p > 1.0 || min_weight <= 0 || max_weight < min_weight) {
                cout << "Graph: Illegal parameter(s) n = " << n
                     << " and/or p = " << p
                     << " and/or (min_weight, max_weight) = (" << min_weight << ", " << max_weight << ")"
                     << endl ;
                return ;
            }

            allocate() ;

            if (seed == 0)
                seed = my_seed() ;
            srand(seed) ;

            for (int i = 0 ; i < n ; ++i) {
                for (int j = i+1 ; j < n ; ++j) {
                    if (drand() < p) {  // then we add an edge on both directions i <--> j, with a random weight
                        A[i][j] = A[j][i] = true ;
                        double w = drand(min_weight, max_weight) ;
                        W[i][j] = W[j][i] = w ;
                        numEdges++ ;
                        sumWeights += w ;
                    }
                }
            }
        }

        ~Graph() {
            if (A != nullptr) {
                for (int i = 0 ; i < n ; ++i)
                    delete [] A[i] ;
                delete [] A ;
            }
            if (W != nullptr) {
                for (int i = 0 ; i < n ; ++i)
                    delete [] W[i] ;
                delete [] W ;
            }
        }

        int getSize() const {
            return n ;
        }

        int getNumEdges() const {
            return numEdges ;
        }

        double getEdgeDensity() const {
            if (n > 1)
                return numEdges/(n*(n-1)/2.0) ;
            else
                return 0.0 ;
        }

        double getAvgWeight() const {
            if (numEdges > 0)
                return sumWeights/numEdges ;
            else
                return 0.0 ;
        }

        bool getAdjacency(int i, int j) const {
            if (i < 0 || j < 0 || i >= n || j >= n) {
                cout << "Illegal vertice(s) i = " << i << " and/or j = " << j << endl ;
                return false ;
            }
            return A[i][j] ;
        }

        double getWeight(int i, int j) const {
            if (i < 0 || j < 0 || i >= n || j >= n) {
                cout << "Illegal vertice(s) i = " << i << " and/or j = " << j << endl ;
                return 0.0 ;
            }
            if (A[i][j])
                return W[i][j] ;
            else
                return 0.0 ;
        }

        set<int>& getNeighbors(int i) const {
            set<int>& neighbors = *(new set<int>) ;
            if (i < 0 || i >= n)
                cout << "Illegal vertex i = " << i << endl ;
            else
                for (int j = 0 ; j < n ; ++j)
                    if (A[i][j])
                        neighbors.insert(j) ;
            return neighbors ;
        }

        double shortestPath(int src, int dst, bool debug = false) const {
            // Find the value of the shortest path between source vertex src and destination vertex dst
            // Using Dijkstra's algorithm.
            // Optionally with debug printing.
            // Uses several coordinated data structures:
            //   A map of the current (or final) distances from dst to the reachable vertices (open and closed);
            //   A set of the closed vertices
            //   A priority queue (from the STL) of the open set, for efficiently getting the closest vertex.
            // In order for the map and priority queue to share updatable data, the map holds a pointer to
            // the distance, and the priority queue essentially the same, as a pair of vertex and the pointer.
            // We do not (currently) return the path itself, only its total distance (a.k.a cost or weight).
            if (src < 0 || dst < 0 || src >= n || dst >= n) {
                cout << "Illegal vertice(s) src = " << src << " and/or dst = " << dst << endl ;
                return 0.0 ;
            }

            // distance data type, of <vertex, pointer_to_distance_from_source>,
            // used in the map (implicitly) and in the priority queue (explicitly)
            typedef pair<int, double*> dd_t ;

            map<int, double*> vertexDist ;

            set<int> closedSet ;

            class pq_compare {
                // used in order to have the top entry in the priority queue
                // to be the one with the shortest distance
                public:
                    bool operator() (const dd_t dd1, const dd_t dd2) {
                        return (*(dd1.second) > *(dd2.second)) ;
                    }
            } ;

            priority_queue<dd_t, vector<dd_t>, pq_compare> openPQ ;

            int actv = -1 ;    // would be the active vertex (with shortest distance) picked from open set

            auto openNewVertex = [&vertexDist, &openPQ](int i, double dist) {
                // Put a new vertex i with distance dist into the open set (both map and priority queue).
                // Needs allocation of the pointer to the distance.
                // This is a lambda with mutable captures (Wow!), as nested functions aren't allowed in C++
                vertexDist[i] = new double ;
                *(vertexDist[i]) = dist ;
                dd_t dd = *(vertexDist.find(i)) ;
                openPQ.push(dd) ;
            } ;

            auto debugDijkstra = [&vertexDist, &closedSet, &openPQ, &actv, this]() {
                // debug print the current state in Dijkstra's algorithm
                cout << "Closed set: {" ;
                for (auto i : closedSet)
                    cout << i << ", " ;
                cout << "}    [size = " << closedSet.size() << "]" << endl ;
                cout << "Open set: {" ;
                for (dd_t dd : vertexDist) {
                    int i = dd.first ;
                    if (closedSet.count(i) == 0)
                        cout << i << ", " ;
                }
                cout << "}   [size = " << vertexDist.size()-closedSet.size()
                     << " = " << openPQ.size() << "]" << endl ;
                cout << "Active vertex: " << actv
                     << ", having " << getNeighbors(actv).size() << " neighbors" << endl ;
            } ;

            // initialize
            openNewVertex(src, 0.0) ; // put the source vertex initially in the *open* set with distance 0

            // iterate
            for(int iter = 1 ; !openPQ.empty() ; ++iter) {
                dd_t top = openPQ.top() ;
                actv = top.first ;                    // "active" vertex:
                if (debug) {
                    cout << "At start of iteration " << iter << ": " << endl ;
                    debugDijkstra() ;
                    cout << endl ;
                }
                openPQ.pop() ;                        //     remove it from open set
                closedSet.insert(actv) ;              //     put it in closed set
                if (actv == dst) {                    //     if its the destination, we're done
                    if (debug)
                        cout << "Breaking..." << endl ;
                    break ;
                }

                auto neighbors = getNeighbors(actv) ;
                for (int ngbr : neighbors) {          //     update its neighbors
                    if (closedSet.count(ngbr) > 0) {  //         unless they're in closed set
                        // cout << "c" ;
                        continue ;
                    }
                    double newdist = *(vertexDist[actv]) + getWeight(actv, ngbr) ;
                    if (vertexDist.count(ngbr) > 0)   //         then already in open set
                        if (newdist < *(vertexDist[ngbr])) { //       so if new distance is shorter,
                            *(vertexDist[ngbr]) = newdist ;  //       update the distance
                            // cout << "u" ;
                        }
                        else {
                            // cout << "l" ;
                        }
                    else {                            //         otherwise add it to map and priority queue
                        openNewVertex(ngbr, newdist) ;
                        // cout << "n" ;
                    }
                }
            }

            if (debug) {
                cout << endl << "Final closed set : {" ;
                for (int i : closedSet)
                    cout << i << ", " ;
                cout << "}" << endl ;
            }

            return (closedSet.count(dst) > 0) ? *(vertexDist[dst]) : inf ;
        }

        double avgShortestPathFrom(int src) const {
            // return the average shortest path (found using the shortestPath method)
            // from a source vertex to all the others.
            // When there is no path, the distance is ignored rather than taken as infinity.
            // Note: dst stands for destination vertex, while dist is the distance.
            int totPaths = 0 ;
            double totDists = 0.0 ;
            for (int dst = 0 ; dst < n ; ++dst) {   // iterate over destinations
                if (dst == src)
                    continue ;
                double dist = shortestPath(src, dst) ;
                if (dist == inf)
                    continue ;
                totPaths++ ;
                totDists += dist ;
            }
            return (totPaths == 0) ? 0.0 : totDists/totPaths ;
        }

        friend ostream& operator<<(ostream& s, const Graph& g) ;


    private:
        // initial values before construction are like for an empty graph
        int n = 0;                 // number of vertices (nodes) in graph
        int numEdges = 0 ;         // number of undirected edges in graph
        double sumWeights = 0.0 ;  // sum of undirected weights in graph
        bool** A = nullptr ;       // Adjacency matrix (graph is simple, so symmetric, with false on main diagonal)
        double** W = nullptr ;     // Weight matrix (positive values, symmetric, only where there's adjacency, otherwise 0)

        void allocate() {
            // Allocating matrices and initializing them for the empty graph (of already known size n)
            A = new bool*[  n] ;
            W = new double*[n] ;
            for (int i = 0 ; i < n ; ++i) {
                A[i] = new bool[  n] ;
                W[i] = new double[n] ;
                for (int j = 0 ; j < n ; ++j) {
                    A[i][j] = false ;
                    W[i][j] = 0.0 ;
                }
            }
        }

} ;


ostream& operator<<(ostream& s, const Graph& g) {
    int n = g.getSize() ;
    int e = g.getNumEdges() ;
    s << "Graph size (number of vertices) = " << n << endl ;
    s << "number of edges = " << e << endl ;
    s << "actual edge density = " << g.getEdgeDensity() << endl ;
    s << "average weight = " << g.getAvgWeight() << endl ;
    s << "Adjacency matrix:" << endl ;
    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < n ; ++j)
            s << (g.getAdjacency(i, j) ? "1" : "0") ;
        s << endl ;
    }
    s << endl ;
    return s ;
}


void checkDijkstra() {
    Graph g(10, 0.5) ;
    cout << g ;

    int src = 3 ;
    int dst = 8 ;

    cout << "Neighbors of vertex " << src << " : [" ;
    for (int j : g.getNeighbors(src))
        cout << j << "," ;
    cout << "]" << endl << endl ;

    double dist = g.shortestPath(src, dst, true) ;
    cout << "Shortest path from " << src << " to " << dst << " is: " << dist << endl ;
}


void homework_PartA_Week3() {
    // Compute average minimal path distance for graphs of several densities

    const int num_graphs = 1000 ;
    const int size_graph = 50 ;
    const vector<double> densities {0.2, 0.4} ;
    const double min_weight = 1.0, max_weight = 10.0 ;

    for (double p : densities) {
        double avgDist = 0.0 ;
        for (int trial = 0 ; trial < num_graphs ; ++trial) {
            Graph g(size_graph, p, min_weight, max_weight) ;
            avgDist += g.avgShortestPathFrom(0) ;
        }
        avgDist /= num_graphs ;
        cout << "For size " << size_graph << ", density " << p
             << ", average shortest path = " << avgDist << endl ;
    }
}
// For size 50, density 0.2, average shortest path = 7.04318
// For size 50, density 0.4, average shortest path = 4.7175


int main() {
    // checkDijkstra() ;
    homework_PartA_Week3() ;

return 0 ;
}

