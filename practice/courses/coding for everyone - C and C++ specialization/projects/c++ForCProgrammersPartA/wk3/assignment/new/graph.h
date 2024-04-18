#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <limits>

class Graph
{
    private:
        // {vertex: [(neighbor, weight)]}
        std::unordered_map<int, std::vector<std::pair<int, int>>> vertices;

        public:
            void addEdge (int u, int v, int weight);

            std::vector<int> getNeighbors (int u);

            int getEdgeWeight (int u, int v);

            int getVertices ();


};

class PriorityQueue
{
    private:
        // Min-heap
        std::priority_queue<std::pair<int, int>> pq;   
        std::unordered_map<int, int> elementToPriority;

    public:
        void insert (int element, int priority);

        int top ();

        void minPriority ();

        bool contains (int element); 
};

class ShortestPath 
{
    private:
        Graph graph;
        PriorityQueue pq;
        // parent relationship for shortest path
        std::unordered_map<int, int> parent;
        // distance from source to each vertex
        std::unordered_map<int, int> distance;

    public:
        // constructor
        ShortestPath (const Graph& g) : graph(g) {}

        void dijkstra (int source);

        std::vector<int> getpath (int source, int destination);

        int getPathSize (int source, int destination);
};