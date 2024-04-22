#include "graph.h"
#include <iostream>
#include <vector>

void Vertex::dijkstraTest ()
{
    Vertex *a = new Vertex ('a');
    Vertex *b = new Vertex ('b');
    Vertex *c = new Vertex ('c');
    Vertex *d = new Vertex ('d');
    Vertex *e = new Vertex ('e');
    Vertex *f = new Vertex ('f');
    Vertex *g = new Vertex ('g');

    Edge *e1 = new Edge (a, c, 1);
    Edge *e2 = new Edge (a, d, 2);
    Edge *e3 = new Edge (b, c, 2);
    Edge *e4 = new Edge (c, d, 1);
    Edge *e5 = new Edge (b, f, 3);
    Edge *e6 = new Edge (c, e, 3);
    Edge *e7 = new Edge (e, f, 2);
    Edge *e8 = new Edge (d, g, 1);
    Edge *e9 = new Edge (g, f, 1);

    a->distanceFromStart = 0;   // set start node;

    std::cout << "a->distanceFromStart = " <<a->distanceFromStart << "\n";

    dijkstras ();
    printShortestPath (f);
}

void Vertex::dijkstras ()
{
    Vertex a;

    while (a.vertices.size () > 0)
    {
        Vertex *smallest = extractSmallest (a.vertices);
        std::vector<Vertex*> *adjacentNodes = adjacentRemainingVertices (smallest);

        const int size = adjacentNodes->size ();
        printf ("size = %d \n", size);

        for (int i = 0; i < size; ++i)
        {
            Vertex *adjacent = adjacentNodes->at (i);

            printf ("size = %d \n", size);

            std::cout << "dijkstra: smallest->distanceFromStart = " << smallest->distanceFromStart << "\n";

            int distanceE = distance (smallest, adjacent) + smallest->distanceFromStart;

            if (distanceE < adjacent->distanceFromStart)
            {
                adjacent->distanceFromStart = distanceE;
                adjacent->previous = smallest;
            }
        }

        delete adjacentNodes;
    }
}

Vertex* Vertex::extractSmallest (std::vector<Vertex*>& nodes)
{
    int size = nodes.size ();

    if (size == 0)
    {
        return NULL;
    }

    int smallestPosition = 0;

    Vertex *smallest = nodes.at (0);

    for (int i = 1; i < size; ++i)
    {
        Vertex *current = nodes.at (i);

        if (current->distanceFromStart < smallest->distanceFromStart)
        {
            smallest = current;
            smallestPosition = i;
        }
    }

    nodes.erase (nodes.begin () + smallestPosition);

    return smallest;
}



std::vector<Vertex *> *Vertex::adjacentRemainingVertices (Vertex *vertex)
{
    Vertex a;

    std::vector<Vertex*> *adjacentNodes = new std::vector<Vertex*> ();

    const int size = a.edges.size ();

    for (int i = 0; i < size; ++i)
    {
        Edge *edge = a.edges.at (i);
        Vertex *adjacent = NULL;

        if (edge->vertex1 == vertex)
        {
            adjacent = edge->vertex2;
        }

        else if (edge->vertex2 == vertex)
        {
            adjacent = edge->vertex1;
        }

        if (adjacent && Vertex::contains (a.vertices, adjacent))
        {
            adjacentNodes->push_back (adjacent);
        }
    }

    return adjacentNodes;
}

int Vertex::distance (Vertex *node1, Vertex *node2)
{
    Vertex a;

    const int size = a.edges.size ();

    for (int i = 0; i < size; ++i)
    {
        Edge *edge = a.edges.at (i);

        if (edge->connects (node1, node2))
        {
            return edge->distanceEE;
        }
    }

    return -1;  // should never happen
}

bool Vertex::contains (std::vector<Vertex*>& nodes, Vertex *node)
{
    const int size = nodes.size ();

    for (int i = 0; i < size; ++i)
    {
        if (node == nodes.at (i))
        {
            return true;
        }
    }

    return false;
}

void Vertex::printShortestPath (Vertex *destination)
{
    Vertex *previous = destination;

    std::cout << "Distance from start: " << destination->distanceFromStart << std::endl;

    while (previous)
    {
        std::cout << previous->id << " ";

        previous = previous->previous;
    }

    std::cout << std::endl;
}

void Edge::removeEdge (std::vector<Edge*>& edges, Edge *edge)
{
    std::vector<Edge*>::iterator it;

    for (it = edges.begin (); it < edges.end (); ++it)
    {
        if (*it == edge)
        {
            edges.erase (it);

            return;
        }
    }
}

std::vector<Edge*> *Edge::adjacentEdges (std::vector<Edge*>& edges, Vertex *node)
{
    std::vector<Edge*> *adjacentE = new std::vector<Edge*> ();

    const int size = edges.size ();

    for (int i = 0; i < size; ++i)
    {
        Edge *edge = edges.at(i);

        if (edge->vertex1 == node)
        {
            std::cout << "adjacent: " << edge->vertex2->id << std::endl;

            adjacentE->push_back (edge);
        }

        else if (edge->vertex2 == node)
        {
            std::cout << "adjacent: " << edge->vertex1->id << std::endl;

            adjacentE->push_back (edge);
        }
    }

    return adjacentE;
} 

bool Edge::connects (Vertex *node1, Vertex *node2)
{
    return ((node1 == this->vertex1 && node2 == this->vertex2) || (node1 == this->vertex2 && node2 == this->vertex1));
}