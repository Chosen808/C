#include <iostream>

const int SIZE = 40;

class Graph 
{
    public:
        // Default constructor
        Graph () {} 

        /**
         * @brief Returns the number of vertices in the graph
         * @param graph This parameter takes the array with vertices and edges here
         * @return int value returned: numbers of vertices
         */
        static int vertices (int graph[][SIZE]);

        /**
         * @brief Returns the number of edges in the graph
         * @param graph This parameter takes the array with vertices and edges here
         * @return int value returned: numbers of edges
         */
        static int edges (int graph[][SIZE]);

        /**
         * @brief Test whether there is an edge from node x to y
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @param y vertex Y
         * @return int value returned: returns 0 an a print statement if there is an edge
         *                             returns 1 an a print statement if there is no edge
         */
        static int adjacent (int graph[][SIZE], int x, int y);

        /**
         * @brief List all vertices y such that there is an edge from x to y
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @return prints the vertices adjacent to x 
         */
        static void neighbors (int graph[][SIZE], int x);

        /**
         * @brief Adds to Graph the edge from x to y, if there is none
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @param y vertex Y
         * @return int value return: 0
         */
        static int add (int graph[][SIZE], int x, int y);

        /**
         * @brief Removes the edge from x to y, if there is one
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @param y vertex Y
         * @return int value returned: returns 1 if there is no edge
         *                             return 0 if there an edge and 0 when it is deleted
         */
        static int del (int graph[][SIZE], int x, int y);

        /**
         * @brief Returns the value associated with the vertex x
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @return int value returned: value of x
         */
        static int getVertexValue (int graph[][SIZE], int x);

        /**
         * @brief Sets the value associated with the vertex x to a
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @param a new vertex value
         * @return int value returned: if the vertex x is not in the list a message is 
         *                             print and 0 returned
         *                             if the vertex value is added 0 is returned
         */
        static int setVertexValue (int graph[][SIZE], int x, int a);

        /**
         * @brief Returns the value associated to edge (x, y)
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @param y vertex Y
         * @return int value returned: if the edge exist 0 is returned and the value of the edge
         *                             if the edge does not exist 1 is returned
         */
        static int getEdgeValue (int graph[][SIZE], int x, int y);

        /**
         * @brief Sets the value associated to the edges (x, y) to v
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @param y vertex Y
         * @param v value of edge
         * @return int value returned: returns 1 if there is no edge
         *                             returns 0 if there is an edge and the value v 
         *                             when it is created
         */
        static int setEdgeValue (int graph[][SIZE], int x, int y, int v);

        // Default deconstructor
        ~Graph () {}


    private:
        int a, x, y, v;

};

class dGraph : public Graph 
{
    public:
        // Default constructor
        dGraph () {}

        /**
         * @brief Test whether there is an edge from vertex x to y: class dGragh does not include
         * the print statements in class Graph
         * @param graph This parameter takes the array with vertices and edges here
         * @param x vertex X
         * @param y vertex Y
         * @return int value returned: returns 0 if there is an edge
         *                             returns 1 if there is no edge
         */
        static int adjacent (int graph[][SIZE], int x, int y);

        // Default decontructor
        ~dGraph () {}
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