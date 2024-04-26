#include <iostream>
#include <bits/stdc++.h>

typedef std::vector<int, int> iPair;

class Graph 
{
    public:

        Graph () {}

        typedef struct GraphG
        {
            friend class DisjointSets;
        
            int V, E;
            std::vector < std::pair<int, iPair>> edges;

            GraphG () {}
            //constructor
            GraphG (int V, int E)
            {
                this->V = V;
                this->E = E;
            }

            void addEdge (int u, int v, int w);
            int kruskalMst ();
        } Graph_t;
};

class DisjointSets : public Graph
{
    public:
        DisjointSets () {}

        friend class Graph;

        typedef struct DisjointSetsDS 
        {
            friend class Graph;

            int *parent, *rnk;
            int n;

            DisjointSetsDS () {}

            DisjointSetsDS (int n)
            {
                this->n = n;
                parent = new int[n+1];
                rnk = new int [n+1];

                // Initially all vertices are in different sets and have rank 0
                for (int i = 0; i <= n; i++)
                {
                    rnk[i] = 0;

                    //every element is parrent of itself
                    parent[i] = i;
                }
            }

            int find (int u);
            void merge (int x, int y);
        } DisjointSetsDS_t;
};