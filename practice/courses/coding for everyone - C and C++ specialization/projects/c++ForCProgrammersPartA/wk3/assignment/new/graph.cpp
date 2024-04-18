#include "graph.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <limits>

void Graph::addEdge (int u, int v, int weight)
{
    vertices[u].push_back ({u, weight});
    vertices[u].push_back ({u, weight});    // assuming undirected graph
}

std::vector<int> Graph::getNeighbors (int u)
{
    std::vector<int> neighbors;

    for (const auto& neighbor: vertices[u])
    {
        neighbors.push_back (neighbor.first);
    }

    return neighbors;
}

int Graph::getEdgeWeight (int u, int v)
{
    for (const auto& neighbor: vertices[u])
    {
        if (neighbor.first == v)
        {
            return neighbor.second;
        }
    }

    return std::numeric_limits<int>::max ();    // return infinity if no edge exists
}

int Graph::getVertices ()
{
    return vertices.begin ();
}

///

void PriorityQueue::insert (int element, int priority)
{
    elementToPriority[element] = priority;

    pq.push ({priority, element});
}

int PriorityQueue::top ()
{
    if (!pq.empty ())
    {
        return pq.top ().second;
    }

    return -1;  // return if queue is empty
}

void PriorityQueue::minPriority ()
{
    if (!pq.empty ())
    {
        int topElement = pq.top ().second;

        elementToPriority.erase (topElement);

        pq.pop ();
    }
}

bool PriorityQueue::contains (int element)
{
    return elementToPriority.find (element) != elementToPriority.end ();
}

///

void ShortestPath::dijkstra (int source)
{
    for (const auto& vertex: graph.getVertices ())
    {

    }
}