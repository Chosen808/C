#include <iostream>

class Graph 
{
    public:
        Graph () {}

        // Returns the number of vertices in the graph
        int vertices (int graph)
        {

        }

        // Returns the number of edges in the graph
        int edges (int graph)
        {

        }

        // Test whether there is an edge from node x to y
        int adjacent (int graph, int x, int y)
        {

        }

        // List all nodes y such that there is an edge from x to y
        int neighbors (int graph, int x)
        {

        }

        // Adds to G the edge from x to y, if there is none
        int add (int graph, int x, int y)
        {

        }

        // Removes the edge from x to y, if there is one
        int del (int graph, int x, int y)
        {

        }

        // Returns the value associated with the node x
        int getNodeValue (int graph, int x)
        {

        }

        // Sets the value associated with the node x to a
        int setNodeValue (int graph, int x, int a)
        {

        }

        // Returns the value associated to edge (x, y)
        int getEdgeValue (int graph, int x, int y)
        {

        }

        // Sets the value associated to the edge (x, y) to v
        int setEdgeValue (int graph, int x, int y, int v)
        {

        }


    private:
        int a, x, y, v;

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