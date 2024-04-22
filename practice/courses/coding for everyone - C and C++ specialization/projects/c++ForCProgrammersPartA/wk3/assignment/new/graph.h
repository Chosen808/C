#include <iostream>
#include <vector>

#define INT_MAX 10000000

class Vertex;
class Edge;

class Vertex 
{
    public:
        std::vector<Vertex*> vertices;
        std::vector<Edge*> edges;

        char id;
        Vertex *previous;
        int distanceFromStart;

        // constructor
        Vertex () {}
        Vertex (char id) : id (id), previous (NULL), distanceFromStart (INT_MAX)
        {
            vertices.push_back (this);
        }

        static Vertex *extractSmallest (std::vector<Vertex*>& vertices);
        static void dijkstraTest ();
        static void dijkstras ();
        static std::vector<Vertex*> *adjacentRemainingVertices (Vertex *vertex);
        static int distance (Vertex *vertex1, Vertex *vertex2);
        static bool contains (std::vector<Vertex*>& vertices, Vertex *Vertex);
        static void printShortestPath (Vertex *destruction);

};

class Edge : public Vertex
{
    public:
        Vertex *vertex1;
        Vertex *vertex2;
        int distanceEE;

        // constructor
        Edge (Vertex *vertex1, Vertex *vertex2, int distance) : vertex1 (vertex1), vertex2 (vertex2), distanceEE (distance)
        {
            edges.push_back (this);
        }

        bool connects (Vertex *vertex1, Vertex *vertex2);
        static void removeEdge (std::vector<Edge*>& Edges, Edge *edge);
        static std::vector<Edge*> *adjacentEdges (std::vector<Edge*>& edges, Vertex *Vertex);
};