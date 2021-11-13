/*(Table) Using the techniques of this chapter, write a
program that calculates the squares and cubes of the integers
from 0 to 10. Use tabs to print the following neatly formatted
table of values:
integer square cube
0 0 0
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
6 36 216
7 49 343
8 64 512
9 81 729
10 100 1000 (c++ how to program)*/
//calculates the squares and cubes of the integers from 0 to 10
#include <iostream>
using namespace std ;
int main () {
    int a(0) ,b(1) ,c(2) ,d(3) ,e(4) ,f(5) 
    ,g(6) ,h(7) ,i(8) ,j(9) ,k(10) ;
    cout << "\tinteger\tsquare\tcube" <<endl;
    cout << "\t" << a << "\t" << a*a << "\t" << a*a*a <<endl;
    cout << "\t" << b << "\t" << b*b << "\t" << b*b*b <<endl;
    cout << "\t" << c << "\t" << c*c << "\t" << c*c*c <<endl;
    cout << "\t" << d << "\t" << d*d << "\t" << d*d*d <<endl;
    cout << "\t" << e << "\t" << e*e << "\t" << e*e*e <<endl;
    cout << "\t" << f << "\t" << f*f << "\t" << f*f*f <<endl;
    cout << "\t" << g << "\t" << g*g << "\t" << g*g*g <<endl;
    cout << "\t" << h << "\t" << h*h << "\t" << h*h*h <<endl;
    cout << "\t" << i << "\t" << i*i << "\t" << i*i*i <<endl;
    cout << "\t" << j << "\t" << j*j << "\t" << j*j*j <<endl;
    cout << "\t" << k << "\t" << k*k << "\t" << k*k*k <<endl;


}