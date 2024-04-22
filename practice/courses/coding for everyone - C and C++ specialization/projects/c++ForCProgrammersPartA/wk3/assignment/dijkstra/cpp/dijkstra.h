#include <iostream>
#include <limits>

/*

Thank You Lord Jesus for building this software

MIT License

Copyright (c) 2023 Jesus Christ

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software and attribution is 
given to the Author Jesus Christ.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
IN THE SOFTWARE.


Peer-graded Assignment: Homework 2: Implement Dijkstra's Algorithm

v2.0
*/

class VertexC
{
    public:
        typedef struct Vertex
        {
            friend class GraphC;
            friend class NodeC;
            friend class Dijkstra;

            char *key;  // Vertex
            int d;  // Distance: weight of path connecting to source
            struct Vertex *prev;    // Previous Vertex to pass to reach source
        } Vertex_t;

        // Default contructor
        VertexC () {}

        /**
         * @brief This function will create vertices
         * @param key This is the name of the vertex
         * @return returns type Vertex_t (the name of the vertex)
         */
        static Vertex_t *createVertex (char *key);

};

class EdgeC : public VertexC
{
    public:
        typedef struct Edge
        {
            friend class NodeC;
            friend class Dijkstra;

            Vertex_t *src;  // Source vertext
            Vertex_t *dst;  // Destination vertex
            int w;  // Weight
        } Edge_t;

        // Default constructor
        EdgeC () {}

        /**
         * @brief This function creates an edge
         * @param src The source edge (u)
         * @param dst The destination edge (v)
         * @param w The weight of the edge (w)
         * @return returns type Edge_t (the edge is returned)
         */
        static Edge_t *createEdge (Vertex_t *src, Vertex_t *dst, int w);
};

class GraphC : public EdgeC
{
    public:
        typedef struct Graph 
        {
            friend class VertexC;
    
            Vertex_t **V;   // Graph vertices
            Edge_t **E; // Graph Edges
            int nV; // Number of vertices inside of graph
            int nE; // Number of edges inside of Graph
        } Graph_t;

        // Default constructor
        GraphC () {}

        /**
         * @brief This function will set the default values for distance
         * @param G The graph is passed here
         * @param s The source vertex
         */
        static void initializeSingleSource (Graph_t *G, Vertex_t *s);

        /**
         * @brief This function gives the edge value
         * @param u Source vertex
         * @param v Destination Vertex
         * @param G Graph
         * @return returns int (the weight of the edge if found or -1 if no edge is found)
         */
        static int w (Vertex_t *u, Vertex_t *v, Graph_t *G);

        /**
         * @brief Test if there is a better path from u to v
         * @param u Source vertex
         * @param v Destination vertex
         * @param G Graph
         */
        static void relax (Vertex_t *u, Vertex_t *v, Graph_t *G);
};

class NodeC : public GraphC
{
    public:
        typedef struct Node 
        {
            friend class Dijkstra;

            Vertex_t *vrt;
            struct Node *next;
        } Node_t;

        typedef struct PriorityList
        {
            friend class Dijkstra;

            Node_t *head;
        } PriorityList_t;

        // Default constructor
        NodeC () {}

        /**
         * @brief Initializes node
         * @param n Node
         */
        static void initNode (Node_t *n);

        /**
         * @brief Initialize list
         * @param L List
         */
        static void initList (PriorityList_t *L);

        /**
         * @brief Inserts elements in list
         * @param L List
         * @param n Node
         */
        static void insertList (PriorityList_t *L, Node_t *n);

        /**
         * @brief Removes an element from the list
         * @param L List
         * @param node Node
         */
        static void removeList (PriorityList_t *L, Node_t *node);

        /**
         * @brief Extracts the minimum from the list
         * @param L List
         * @return retunrs type Node_t (the min value)
         */
        static Node_t *extractMin (PriorityList_t *L);

        /**
         * @brief Creates a Priority List
         * @param G Graph
         * @return returns type PriorityList_t (the list is returned)
         */
        static PriorityList_t *createListFromGraph (Graph_t *G);
};

class Dijkstra : public NodeC
{
    public:
        // Default constructor
        Dijkstra () {};

        /**
         * @brief Shortest path function
         * @param G Graph
         * @param s Source Vertex
         */
        static void dijkstra (Graph_t *G, Vertex_t *s);

        /**
         * @brief This will print the shortest path result
         * @param G Graph
         * @param s Source vertex
         */
        static void printDistance (Graph_t *G, Vertex_t *s);   
};