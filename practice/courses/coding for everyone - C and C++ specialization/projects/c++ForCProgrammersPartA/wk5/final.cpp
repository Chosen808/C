///What does this program print?

#include <iostream>

using namespace std;

#define foo1( a ) (a * a)

inline int foo2( int a ) { return (a * a); }

inline int goo1( int x ) { return foo1(foo2(x)); }

inline int goo2( int& x ) { return x = foo2(foo1(x)); }

inline int goo3( int& x, int y ) { return foo2(foo1(y + 1)); }

inline void goo4( int& x, int y ) { x = foo1(foo2(y + 1)); }

int main()

{

int i = 2, j = 1;

std::cout << "foo1 = " << foo1( 2 + 1 ) << "\n";

std::cout << "foo2 = " << foo2( 2 + 1 ) << "\n";

std::cout << "goo1 = " << goo1( i ) << "\n";

std::cout << "goo2 = " << goo2( j ) << "\n";

std::cout << "goo3 = " << goo3( i, j ) << "\n";

goo4( i, j );

std::cout << "i = " << i << "\nj = " << j << "\n";

return 0;

}