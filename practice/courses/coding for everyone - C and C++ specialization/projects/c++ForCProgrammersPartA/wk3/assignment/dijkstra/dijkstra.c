#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Vertex
{
    char *key;  // Vertex
    int d;  // Distance: weight of path connecting to source
    struct Vertex *prev;    // Previous vertex to pass to reach source

} Vertex_t;

typedef struct Edge 
{
    Vertex_t *src;  // Source vertex
    Vertex_t *dst;   // Destination vertex
    int w;  // Weight
} Edge_t;

typedef struct Graph
{
    Vertex_t **V;   // Graph vertices
    Edge_t **E; // Graph Edges
    int nV; // Number of vertices inside of graph
    int nE; // Number of edges inside of graph
} Graph_t;

// This function will create vertices, key is the vertex
Vertex_t *createVertex (char *key)
{
    Vertex_t *v = malloc (sizeof (Vertex_t));

    v->key = key;   // Set the vertex

    return v;   // returns vertex
}

// This function creates an edge, *src (vertex), *dst (destination vertex), w (weight of vertex)
Edge_t *createEdge (Vertex_t *src, Vertex_t *dst, int w)
{
    Edge_t *e = malloc (sizeof (Edge_t));

    e->dst = dst;   // sets destination vertex   
    e->src = src;   // sets source vertex
    e->w = w;   // sets weight of edge

    return e;   // returns e
}

// This function will set the default values for distance
void initializeSingleSource (Graph_t *G, Vertex_t *s)
{
    for (int i = 0; i < G->nV; i = i +1)
    {
        G->V[i]->d = INT_MAX;   // Sets the distance to each vertex to 0x7fffffff
        G->V[i]->prev = NULL;   // Previous vertex set to NULL
    }

    s->d = 0;   // Sets the distance of the source to itself to 0
}

// This function gives the edge size, *u (source vertex), *v (destination vertex), *G (graph)
int w (Vertex_t *u, Vertex_t *v, Graph_t *G)
{
    int i = 0;

    // While i is less than number of edges in graph
    while (i < G->nE)
    {
        // checks if u is connected to v
        if (G->E[i]->src == u && G->E[i]->dst == v)
        {
            return G->E[i]->w;  // returns weight of edge
        }

        i++;    // increments i if edge not found
    }

    return -1;  // If no edge found
}

/* 
Test if there is a better path from u to v, *u (source vertex), 
*v (destination vertex), *G (graph)
*/
void relax (Vertex_t *u, Vertex_t *v, Graph_t *G)
{
    /*
    Test if the distance of current path connecting s,v is 
    greater than path connecting s,u plus the weight of u,v
    */
    if (v->d > u->d + w (u, v, G))
    {
        v->d = u->d + w (u, v, G);  // Sets new distance if s,u + u,v is less than s,v
        v->prev = u;    // Updates previous vertex for s,v that passes through u
    }
}


typedef struct Node 
{
    Vertex_t *vrt;
    struct Node *next;
} Node_t;

typedef struct PriorityList
{
    Node_t *head;
} PriorityList_t;

// Initializes node
void initNode (Node_t *n)
{
    n->next = NULL;
}

// Initialize list
void initList (PriorityList_t *L)
{
    L->head = NULL;
}

// Inserts elements in list
void insertList (PriorityList_t *L, Node_t *n)
{
    n->next = L->head;
    L->head = n;
}

// Removes an element from the list
void removeList (PriorityList_t *L, Node_t *node)
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

Node_t *extractMin (PriorityList_t *L)
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

// Creates a Priority list
PriorityList_t *createListFromGraph (Graph_t *G)
{
    PriorityList_t *L = malloc (sizeof (PriorityList_t));

    initList (L);

    for (int i = 0; i < G->nV; i = i + 1)
    {
        Node_t *n = malloc (sizeof (Node_t));

        initNode (n);

        n->vrt = G->V[i];

        insertList (L, n);
    }

    return L;
}

// Shortest path function, *G (graph), *s (source vertext)
void dijkstra (Graph_t *G, Vertex_t *s)
{
    // Initializes source distances to default values
    initializeSingleSource (G, s);

    // Create a priority list
    PriorityList_t *Q = createListFromGraph (G);

    // While list is not empty
    while (Q->head != NULL)
    {
        // Extract the minimum node in the priority list
        Vertex_t *u = extractMin (Q)->vrt;

        // Checks for adjacent vertices to u
        for (int i = 0; i < G->nE; i = i + 1)
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

// This will print the shortest path results, *G (graph), *s source (source vertex)
void printDisance (Graph_t *G, Vertex_t *s)
{
    // Will iterate over vertices
    for (int i = 0; i < G->nV; i++)
    {
        // Destination vertex
        Vertex_t *v = G->V[i];

        // Prints results
        printf ("The shortest path between %s and %s is: %d \n", s->key, v->key, v->d);
    }
}

main ()
{
    // Defines a graph
    Graph_t *G = malloc (sizeof (Graph_t));
    G->nV = 5;   // Sets the number of vertices in the graph 
    G->nE = 11;  // Sets the number of edges in the graph
    G->V = malloc (G->nV * sizeof (Vertex_t *)); // memory for vertices
    G->E = malloc (G->nE * sizeof (Edge_t *));  // memory for edges

    // Vertices for graph
    Vertex_t *s = createVertex ("s");
    G->V[0] = s;
    Vertex_t *t = createVertex ("t");
    G->V[1] = t;
    Vertex_t *x = createVertex ("x");
    G->V[2] = x;
    Vertex_t *y = createVertex ("y");
    G->V[3] = y;
    Vertex_t *z = createVertex ("z");
    G->V[4] = z;

    // Edges for graph
    Edge_t *s_t = createEdge (s, t, 10);
    G->E[0] = s_t;
    Edge_t *s_y = createEdge (s, y ,5);
    G->E[1] = s_y;
    Edge_t *t_y = createEdge (t, y, 2);
    G->E[2] = t_y;
    Edge_t *t_x = createEdge (t, x, 1);
    G->E[3] = t_x;
    Edge_t *y_t = createEdge (y, t, 3);
    G->E[4] = y_t;
    Edge_t *y_x = createEdge (y, x, 9);
    G->E[5] = y_x;
    Edge_t *y_z = createEdge (y, z, 2);
    G->E[6] = y_z;
    Edge_t *x_z = createEdge (x, z, 4);
    G->E[7] = x_z;
    Edge_t *z_x = createEdge (z, x, 6);
    G->E[8] = z_x;
    Edge_t *z_s = createEdge (z, s, 7);
    G->E[9] = z_s;
    Edge_t *s_z = createEdge (s, z, 5);
    G->E[10] = s_z;

    dijkstra (G, s);
    printDisance (G, s);

    return 0;
}