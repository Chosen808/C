#include "mst.h"
#include <iostream>
#include <bits/stdc++.h>
#include <bits/stl_pair.h>

void Graph::Graph_t::addEdge (int u, int v, int w)
{
    edges.push_back ({w, {u, v}});
}

int Graph::Graph_t::kruskalMst ()
{
    int mst_wt = 0; // Initialize result

    // Sort edges in increasing order on basis of cost
    std::sort (edges.begin (), edges.end ());

    // Create disjoint sets
    
    DisjointSets::DisjointSetsDS_t ds (V);

    // Iterate through all sorted edges
    std::vector<std::pair<int, iPair>>::iterator it;

    for (it = edges.begin (); it != edges.end (); it++)
    {
        int u = it._M_current->first;
        int v = it._M_current->second;
    }
}