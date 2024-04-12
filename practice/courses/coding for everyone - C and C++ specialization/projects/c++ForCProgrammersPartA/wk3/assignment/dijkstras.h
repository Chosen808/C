#include <iostream>

const int SIZE = 40;

class Graph 
{
    public:
        Graph () {}

        // Returns the number of vertices in the graph
        static int vertices (int graph[][SIZE]);

        // Returns the number of edges in the graph
        static int edges (int graph[][SIZE]);

        // Test whether there is an edge from node x to y
        static int adjacent (int graph[][SIZE], int x, int y);

        // List all nodes y such that there is an edge from x to y
        static int neighbors (int graph[][SIZE], int x);

        // Adds to G the edge from x to y, if there is none
        static int add (int graph[][SIZE], int x, int y);

        // Removes the edge from x to y, if there is one
        static int del (int graph[][SIZE], int x, int y);

        // Returns the value associated with the node x
        static int getVertexValue (int graph[][SIZE], int x);

        // Sets the value associated with the node x to a
        static int setVertexValue (int graph[][SIZE], int x, int a);

        // Returns the value associated to edge (x, y)
        static int getEdgeValue (int graph[][SIZE], int x, int y);

        // Sets the value associated to the edge (x, y) to v
        static int setEdgeValue (int graph[][SIZE], int x, int y, int v);


    private:
        int a, x, y, v;

};

class dGraph : public Graph 
{
    public:
        static int adjacent (int graph[][SIZE], int x, int y);
};

class PriorityQueue
{
    public:
        PriorityQueue () {}

        // Changes the priorty (node value) of queue element
        int chgPriority (int PQ, int priority)
        {

        }

        // Removes the top element of the queue
        int minPriority (int PQ)
        {

        }

        // Does the queue contain queue element
        int contains (int PQ, int queueElement)
        {

        }

        // Insert queue element
        int insert (int PQ, int queueElement)
        {

        }

        // Returns the top element of the queue
        int top (int PQ)
        {

        }

        // Return the number of queue elements
        int size (int PQ)
        {

        }

    private:
        int priority, queueElement;

};

class ShortestPath 
{
    public:
        ShortestPath () {}

        // List of vertices in G(V, E)
        int vertices (int list)
        {

        }

        /*
        Find shortest path between u and w. Returns the sequence of vertices 
        represent shortest path u-v1-v2-...-vn-w
        */
        int path (int u, int w)
        {

        }

        // Return the path cost associated with the shortest path
        int pathSize (int u, int w)
        {

        }
};