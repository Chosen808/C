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

// DSU Data structure
// path compression and rank by union
class DSU 
{
        int *parent;
        int *rank;

    public:

        // Constructor
        DSU (int n)
        {
            parent = new int[n];
            rank = new int[n];

            for (int i = 0; i < n; i++)
            {
                parent[i] = -1;
                rank[i] = 1;
            }
        } 

        /**
         * @brief Find function
         * @param i u or v vertex
         * @return returns u or v if u or v are parent
         *         || returns parent of u or v if u or v are not parent
         */
        int find (int i);

        /**
         * @brief Union function
         * @param x u Vertex
         * @param y v Vertex
         */
        void unite (int x, int y);
};

class Graph
{
        std::vector<std::vector<int> > edgelist;
        int V;

    public:
        int u, v, w;

        // Constructor
        Graph (int V)
        {
            this->V = V;
        }
        
        /**
         * @brief Function to add edge in graph
         * @param x u Vertex
         * @param y v Vertex
         * @param w weight of edge
         */
        void addEdge (int x, int y, int w);

        /**
         * @brief Minimum Spanning Tree Algorithm
         */
        void kruskal();

};