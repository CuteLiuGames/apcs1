/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<stdio.h>
using namespace std;

int main ()
{
  int a, b, result;
  a = 20;
  b = 7;
  
  
  result = a+b;
  printf ("A+B=%d\n", result);
  result = a-b;
  printf ("A-B=%d\n", result);
  result = a*b;
  printf ("A*B=%d\n", result);
  result = a/b;
  printf ("A/B=%d\n", result);
  result = a%b;
  printf ("A mod B=%d\n", result);
  
  
  result = a>b;
  printf ("A>B =>%d\n", result);
  result = a<b;
  printf ("A<B =>%d\n", result);
  result = a==b;
  printf ("A==B =>%d\n", result);
  
  
  result = a > 10 && b < 8;
  printf ("a > 10 && b < 8 =>%d\n", result);
  result = a > 10 || b < 8;
  printf ("a > 10 || b < 8 =>%d\n", result);
  result = !(a > 10 || b < 8);
  printf ("!(a > 10 || b < 8) =>%d\n", result);
  
  
  result = a >> 1;
  printf ("a >> 1 =>%d\n", result);
  result = a << 1;
  printf ("a << 1 =>%d\n", result);
  result = a & b;
  printf ("a & b =>%d\n", result);
  result = a | b;
  printf ("a | b =>%d\n", result);

  return 0;
}
