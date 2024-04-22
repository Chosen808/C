#include "dijkstra.h"
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

VertexC::Vertex_t * VertexC::createVertex (char *key)
{
    Vertex_t *v = new Vertex_t;

    v->key = key;   // Set the vertex

    return v;   // return vertex
}

EdgeC::Edge_t * EdgeC::createEdge (Vertex_t *src, Vertex_t *dst, int w)
{
    Edge_t *e = new Edge_t;

    e->dst = dst;   // sets destination vertex
    e->src = src;   // sets source vertex
    e->w = w;   // sets weight edge

    return e;   // returns e
}

void GraphC::initializeSingleSource (Graph_t *G, Vertex_t *s)
{
    for (int i = 0; i < G->nV; i++)
    {
        G->V[i]->d = __INT_MAX__;   // Sets the distance to each vertex to 0x7fffffff
        G->V[i]->prev = NULL;   // Previous vertex set to NULL
    }

    s->d = 0;   // Sets the distance of the source to itself to 0
}

int GraphC::w (Vertex_t *u, Vertex_t *v, Graph_t *G)
{
    int i = 0;

    // While i is less than number of edges in graph
    while (i < G->nE)
    {
        // check if u is connect to v
        if (G->E[i]->src == u && G->E[i]->dst == v)
        {
            return G->E[i]->w;  // returns weight of edge
        }

        i++;    // increments i if edge not found
    }

    return -1;  // If no edge found
}

void GraphC::relax (Vertex_t *u, Vertex_t *v, Graph_t *G)
{
    /*
    Test if the distance of current path connecting s,v is
    greater than path connecting s,u plus the weight of u,v
    */
   if (v->d > u->d + w (u, v, G))
   {
    v->d = u->d + w (u, v, G);  // Sets new distance if s,u + u.v is less than s,v
    v->prev = u;    // Updates previous vertex for s,v that passes through u
   }
}

void NodeC::initNode (Node_t *n)
{
    n->next = NULL;
}

void NodeC::initList (PriorityList_t *L)
{
    L->head = NULL;
}

void NodeC::insertList(PriorityList_t *L, Node_t *n)
{
    n->next = L->head;
    L->head = n;
}

void NodeC::removeList (PriorityList_t *L, Node_t *node)
{
    Node_t *x = L->head;
    Node_t *prev = NULL;

    while (x != NULL && x != node)
    {
        prev = x;
        x = x->next;
    }

    if (prev != NULL)
    {
        prev->next = x->next;
    }

    else 
    {
        L->head = x->next;
    }
}

NodeC::Node_t * NodeC::extractMin (PriorityList_t *L)
{
    if (L->head == NULL)
    {
        return NULL;
    }

    Node_t *min = L->head;
    Node_t *x = L->head->next;

    while (x != NULL)
    {
        if (x->vrt->d < min->vrt->d)
        {
            min = x;
        }

        x = x->next;
    }

    removeList (L, min);

    return min;
}

NodeC::PriorityList_t * NodeC::createListFromGraph (Graph_t *G)
{
    PriorityList_t *L = new PriorityList;

    initList (L);

    for (int i = 0; i < G->nV; i++)
    {
        Node_t *n = new Node_t;

        initNode (n);

        n->vrt = G->V[i];

        insertList (L, n);
    }

    return L;
}

void Dijkstra::dijkstra (Graph_t *G, Vertex_t *s)
{
    // Initializes source distance to default values
    initializeSingleSource (G, s);

    // Create a priority list
    PriorityList_t *Q = createListFromGraph (G);

    // While list is not empty
    while (Q->head != NULL)
    {
        // Extract the minimum node in the priorty list
        Vertex_t *u = extractMin (Q)->vrt;

        // Checks for adjacent vertices to u
        for (int i = 0; i < G->nE; i++)
        {
            // Test if the edge source is equal to u
            if (G->E[i]->src == u)
            {
                // This is u adjacent vertex
                Vertex_t *v = G->E[i]->dst;

                // Test if there is a better path from u to v
                relax (u, v, G);
            }
        }
    }

    free (Q);
}

void Dijkstra::printDistance (Graph_t *G, Vertex_t *s)
{
    // Will iterate over vertices
    for (int i = 0; i < G->nV; i++)
    {
        // Destination vertex
        Vertex_t *v = G->V[i];

        //Prints results
        printf ("%d: The length of the shortest path between %s and %s is %d \n", i + 1, s->key, v->key, v->d);
    }
}