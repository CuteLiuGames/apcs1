/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<stdio.h>
using namespace std;

int
main ()
{
#if 1
  int a[2];
  printf ("A[0]=>");
  scanf ("%d", &a[0]);
  printf ("A[1]=>");
  scanf ("%d", &a[1]);
  printf ("A[0]+A[1]=%d\n", a[0] + a[1]);
#else
  int a, b;
  printf ("A=>");
  scanf ("%d", &a);
  printf ("B=>");
  scanf ("%d", &b);
  printf ("A+B=%d\n", a + b);
#endif

  return 0;
}
