#include "kruskal.h"
#include <iostream>
#include <bits/stdc++.h>

/*

PLEASE RUN THE COMMAND make IN YOUR TERMINAL TO BUILD THIS SOFTWARE

*/

/*

Thank You Lord Jesus for building this software

MIT License

Copyright (c) 2024 Jesus Christ

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software and attribution is 
given to the Author Jesus Christ.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
IN THE SOFTWARE.


Peer-graded Assignment: Homework 3: Compute the minimum spanning tree for an inputted graph

v1.0
*/

int DSU::find (int i)
{
    if (parent[i] == -1)
    {
        return i;
    }

    return parent[i] = find (parent[i]);
}

void DSU::unite (int x, int y)
{
    int s1 = find (x);
    int s2 = find (y);

    if (s1 != s2)
    {
        if (rank[s1] < rank[s2])
        {
            parent[s1] = s2;
        }

        else if (rank[s1] > rank[s2])
        {
            parent[s2] = s1;
        }

        else 
        {
            parent[s2] = s1;
            rank[s1] += 1;
        }
    }
}

void Graph::addEdge (int x, int y, int w)
{
    edgelist.push_back ({w, x, y});
}

void Graph::kruskal ()
{
    // Sort all edges
    std::sort (edgelist.begin (), edgelist.end ());

    // Initialize the DSU
    DSU s(V);
    int ans = 0;

    std::cout << "Following are the edges in the constructed MST \n";

    for (auto edge : edgelist)
    {
        int w = edge[0];
        int x = edge[1];
        int y = edge[2];

        // Take this edge in MST if it does not form a cycle
        if (s.find (x) != s.find (y))
        {
            s.unite (x, y);
            ans += w;
            std::cout << x << " -- " << y << " == " << w << "\n";
        }
    }

    std::cout << "\nMinimum Cost Spanning Tree: " << ans << "\n";
    
}