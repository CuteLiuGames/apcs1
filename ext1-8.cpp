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
  int a, b;
  printf ("A=>");
  scanf ("%d", &a);
  printf ("B=>");
  scanf ("%d", &b);
  
  if(a > b){
      printf(" a > b \n");
  }
  else if(a == b){
      printf(" a = b \n");
  }
  else{
      printf(" a < b \n");
  }

  return 0;
}