#include "dijkstra.h"
#include <iostream>
#include <limits>
#include <stdlib.h>

/*

PLEASE RUN THE COMMAND make IN YOUR TERMINAL TO BUILD THIS SOFTWARE

*/

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

main ()
{
    // Defines a graph
    GraphC::Graph_t *G = new GraphC::Graph_t;
    G->nV = 50;  // Sets the number of vertices in the graph
    G->nE = 59; // Sets the number of edges in the graph
    G->V = (VertexC::Vertex_t**) malloc (G->nV * sizeof (VertexC::Vertex_t *));  // memory for vertices
    G->E = (EdgeC::Edge_t**) malloc (G->nE * sizeof (EdgeC::Edge_t *)); // memory for edges

    // Vertices for graph
    VertexC::Vertex_t *a = VertexC::createVertex ("a");
    G->V[0] = a;
    VertexC::Vertex_t *b = VertexC::createVertex ("b");
    G->V[1] = b;
    VertexC::Vertex_t *c = VertexC::createVertex ("c");
    G->V[2] = c;
    VertexC::Vertex_t *d = VertexC::createVertex ("d");
    G->V[3] = d;
    VertexC::Vertex_t *e = VertexC::createVertex ("e");
    G->V[4] = e;
    VertexC::Vertex_t *f = VertexC::createVertex ("f");
    G->V[5] = f;
    VertexC::Vertex_t *g = VertexC::createVertex ("g");
    G->V[6] = g;
    VertexC::Vertex_t *h = VertexC::createVertex ("h");
    G->V[7] = h;
    VertexC::Vertex_t *i = VertexC::createVertex ("i");
    G->V[8] = i;
    VertexC::Vertex_t *j = VertexC::createVertex ("j");
    G->V[9] = j;
    VertexC::Vertex_t *k = VertexC::createVertex ("k");
    G->V[10] = k;
    VertexC::Vertex_t *l = VertexC::createVertex ("l");
    G->V[11] = l;
    VertexC::Vertex_t *m = VertexC::createVertex ("m");
    G->V[12] = m;
    VertexC::Vertex_t *n = VertexC::createVertex ("n");
    G->V[13] = n;
    VertexC::Vertex_t *o = VertexC::createVertex ("o");
    G->V[14] = o;
    VertexC::Vertex_t *p = VertexC::createVertex ("p");
    G->V[15] = p;
    VertexC::Vertex_t *q = VertexC::createVertex ("q");
    G->V[16] = q;
    VertexC::Vertex_t *r = VertexC::createVertex ("r");
    G->V[17] = r;
    VertexC::Vertex_t *s = VertexC::createVertex ("s");
    G->V[18] = s;
    VertexC::Vertex_t *t = VertexC::createVertex ("t");
    G->V[19] = t;
    VertexC::Vertex_t *u = VertexC::createVertex ("u");
    G->V[20] = u;
    VertexC::Vertex_t *v = VertexC::createVertex ("v");
    G->V[21] = v;
    VertexC::Vertex_t *w = VertexC::createVertex ("w");
    G->V[22] = w;
    VertexC::Vertex_t *x = VertexC::createVertex ("x");
    G->V[23] = x;
    VertexC::Vertex_t *y = VertexC::createVertex ("y");
    G->V[24] = y;
    VertexC::Vertex_t *z = VertexC::createVertex ("z");
    G->V[25] = z;
    VertexC::Vertex_t *aa = VertexC::createVertex ("aa");
    G->V[26] = aa;
    VertexC::Vertex_t *bb = VertexC::createVertex ("bb");
    G->V[27] = bb;
    VertexC::Vertex_t *cc = VertexC::createVertex ("cc");
    G->V[28] = cc;
    VertexC::Vertex_t *dd = VertexC::createVertex ("dd");
    G->V[29] = dd;
    VertexC::Vertex_t *ee = VertexC::createVertex ("ee");
    G->V[30] = ee;
    VertexC::Vertex_t *ff = VertexC::createVertex ("ff");
    G->V[31] = ff;
    VertexC::Vertex_t *gg = VertexC::createVertex ("gg");
    G->V[32] = gg;
    VertexC::Vertex_t *hh = VertexC::createVertex ("hh");
    G->V[33] = hh;
    VertexC::Vertex_t *ii = VertexC::createVertex ("ii");
    G->V[34] = ii;
    VertexC::Vertex_t *jj = VertexC::createVertex ("jj");
    G->V[35] = jj;
    VertexC::Vertex_t *kk = VertexC::createVertex ("kk");
    G->V[36] = kk;
    VertexC::Vertex_t *ll = VertexC::createVertex ("ll");
    G->V[37] = ll;
    VertexC::Vertex_t *mm = VertexC::createVertex ("mm");
    G->V[38] = mm;
    VertexC::Vertex_t *nn = VertexC::createVertex ("nn");
    G->V[39] = nn;
    VertexC::Vertex_t *oo = VertexC::createVertex ("oo");
    G->V[40] = oo;
    VertexC::Vertex_t *pp = VertexC::createVertex ("pp");
    G->V[41] = pp;
    VertexC::Vertex_t *qq = VertexC::createVertex ("qq");
    G->V[42] = qq;
    VertexC::Vertex_t *rr = VertexC::createVertex ("rr");
    G->V[43] = rr;
    VertexC::Vertex_t *ss = VertexC::createVertex ("ss");
    G->V[44] = ss;
    VertexC::Vertex_t *tt = VertexC::createVertex ("tt");
    G->V[45] = tt;
    VertexC::Vertex_t *uu = VertexC::createVertex ("uu");
    G->V[46] = uu;////
    VertexC::Vertex_t *vv = VertexC::createVertex ("vv");
    G->V[47] = vv;
    VertexC::Vertex_t *ww = VertexC::createVertex ("ww");
    G->V[48] = ww;
    VertexC::Vertex_t *xx = VertexC::createVertex ("xx");
    G->V[49] = xx;


    //Edges for graph
    EdgeC::Edge_t *a_b = EdgeC::createEdge (a, b, 5);
    G->E[0] = a_b;
    EdgeC::Edge_t *a_d = EdgeC::createEdge (a, d, 4);
    G->E[1] = a_d;
    EdgeC::Edge_t *a_e = EdgeC::createEdge (a, e, 3);
    G->E[2] = a_e;
    EdgeC::Edge_t *b_c = EdgeC::createEdge (b, c, 3);
    G->E[3] = b_c;
    EdgeC::Edge_t *b_f = EdgeC::createEdge (b, f, 8);
    G->E[4] = b_f;
    EdgeC::Edge_t *b_ee = EdgeC::createEdge (b, ee, 4);
    G->E[5] = b_ee;
    EdgeC::Edge_t *c_f = EdgeC::createEdge (c, f, 2);
    G->E[6] = c_f;
    EdgeC::Edge_t *c_g = EdgeC::createEdge (c, g, 4);
    G->E[7] = c_g;
    EdgeC::Edge_t *c_j = EdgeC::createEdge (c, j, 3);
    G->E[8] = c_j;
    EdgeC::Edge_t *c_bb = EdgeC::createEdge (c, bb, 2);
    G->E[9] = c_bb;
    EdgeC::Edge_t *d_e = EdgeC::createEdge (d, e, 2);
    G->E[10] = d_e;
    EdgeC::Edge_t *d_h = EdgeC::createEdge (d, h, 6);
    G->E[11] = d_h;
    EdgeC::Edge_t *e_h = EdgeC::createEdge (e, h, 4);
    G->E[12] = e_h;
    EdgeC::Edge_t *e_i = EdgeC::createEdge (e, i, 3);
    G->E[13] = e_i;
    EdgeC::Edge_t *e_f = EdgeC::createEdge (e, f, 8);
    G->E[14] = e_f;
    EdgeC::Edge_t *e_m = EdgeC::createEdge (e, m, 5);
    G->E[15] = e_m;
    EdgeC::Edge_t *f_i = EdgeC::createEdge (f, i, 3);
    G->E[16] = f_i;
    EdgeC::Edge_t *f_j = EdgeC::createEdge (f, j, 2);
    G->E[17] = f_j;
    EdgeC::Edge_t *f_aa = EdgeC::createEdge (f, aa, 5);
    G->E[18] = f_aa;
    EdgeC::Edge_t *g_f = EdgeC::createEdge (g, f, 1);
    G->E[19] = g_f;
    EdgeC::Edge_t *g_tt = EdgeC::createEdge (g, tt, 3);
    G->E[20] = g_tt;
    EdgeC::Edge_t *h_o = EdgeC::createEdge (h, o, 5);
    G->E[21] = h_o;
    EdgeC::Edge_t *h_p = EdgeC::createEdge (h, p, 8);
    G->E[22] = h_p;
    EdgeC::Edge_t *h_w = EdgeC::createEdge (h, w, 4);
    G->E[23] = h_w;
    EdgeC::Edge_t *i_r = EdgeC::createEdge (i, r, 9);
    G->E[24] = i_r;
    EdgeC::Edge_t *i_t = EdgeC::createEdge (i, t, 3);
    G->E[25] = i_t;
    EdgeC::Edge_t *i_v = EdgeC::createEdge (i, v, 9);
    G->E[26] = i_v;
    EdgeC::Edge_t *j_g = EdgeC::createEdge (j, g, 2);
    G->E[27] = j_g;
    EdgeC::Edge_t *j_k = EdgeC::createEdge (j, k, 5);
    G->E[28] = j_k;
    EdgeC::Edge_t *j_l = EdgeC::createEdge (j, l, 3);
    G->E[29] = j_l;
    EdgeC::Edge_t *k_m = EdgeC::createEdge (k, m, 6);
    G->E[30] = k_m;
    EdgeC::Edge_t *k_n = EdgeC::createEdge (k, n, 9);
    G->E[31] = k_n;
    EdgeC::Edge_t *k_q = EdgeC::createEdge (k, q, 3);
    G->E[32] = k_q;
    EdgeC::Edge_t *l_r = EdgeC::createEdge (l, r, 7);
    G->E[33] = l_r;
    EdgeC::Edge_t *l_s = EdgeC::createEdge (l, s, 2);
    G->E[34] = l_s;
    EdgeC::Edge_t *l_ss = EdgeC::createEdge (l, ss, 5);
    G->E[35] = l_ss;
    EdgeC::Edge_t *m_dd = EdgeC::createEdge (m, dd, 3);
    G->E[36] = m_dd;
    EdgeC::Edge_t *m_oo = EdgeC::createEdge (m, oo, 1);
    G->E[37] = m_oo;
    EdgeC::Edge_t *m_rr = EdgeC::createEdge (m, rr, 4);
    G->E[38] = m_rr;
    EdgeC::Edge_t *n_ii = EdgeC::createEdge (n, ii, 6);
    G->E[39] = n_ii;
    EdgeC::Edge_t *n_qq = EdgeC::createEdge (n, qq, 2);
    G->E[40] = n_qq;
    EdgeC::Edge_t *p_jj = EdgeC::createEdge (p, jj, 7);
    G->E[41] = p_jj;
    EdgeC::Edge_t *p_kk = EdgeC::createEdge (p, kk, 4);
    G->E[42] = p_kk;
    EdgeC::Edge_t *q_ll = EdgeC::createEdge (q, ll, 2);
    G->E[43] = q_ll;
    EdgeC::Edge_t *q_pp = EdgeC::createEdge (q, pp, 5);
    G->E[44] = q_pp;
    EdgeC::Edge_t *q_vv = EdgeC::createEdge (q, vv, 6);
    G->E[45] = q_vv;
    EdgeC::Edge_t *s_ff = EdgeC::createEdge (s, ff, 3);
    G->E[46] = s_ff;
    EdgeC::Edge_t *s_gg = EdgeC::createEdge (s, gg, 7);
    G->E[47] = s_gg;
    EdgeC::Edge_t *s_nn = EdgeC::createEdge (s, nn, 1);
    G->E[48] = s_nn;
    EdgeC::Edge_t *r_z = EdgeC::createEdge (r, z, 1);
    G->E[49] = r_z;
    EdgeC::Edge_t *r_cc = EdgeC::createEdge (r, cc, 9);
    G->E[50] = r_cc;
    EdgeC::Edge_t *r_mm = EdgeC::createEdge (r, mm, 5);
    G->E[51] = r_mm;
    EdgeC::Edge_t *t_u = EdgeC::createEdge (t, u, 2);
    G->E[52] = t_u;
    EdgeC::Edge_t *t_x = EdgeC::createEdge (t, x, 1);
    G->E[53] = t_x;
    EdgeC::Edge_t *t_y = EdgeC::createEdge (t, y, 8);
    G->E[54] = t_y;
    EdgeC::Edge_t *t_hh = EdgeC::createEdge (t, hh, 3);
    G->E[55] = t_hh;
    EdgeC::Edge_t *u_uu = EdgeC::createEdge (u, uu, 6);
    G->E[56] = u_uu;
    EdgeC::Edge_t *u_ww = EdgeC::createEdge (u, ww, 7);
    G->E[57] = u_ww;
    EdgeC::Edge_t *u_xx = EdgeC::createEdge (u, xx, 3);
    G->E[58] = u_xx;
    
    Dijkstra::dijkstra (G, a);
    Dijkstra::printDistance (G, a);

    return 0;

}