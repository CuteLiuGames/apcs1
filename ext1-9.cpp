/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<stdio.h>
using namespace std;
int find_max(int a[5], int n){
    int i,max = -10000;
  for(int i=0; i<n; i++){
      if(a[i] > max){
          max = a[i];
      }
  }
  return max;
}
int main ()
{
  int a[5],i,n,max = -10000;
  scanf("%d", &n);
  for(i=0; i<n; i++){
      scanf("%d", &a[i]);
  }
  printf("the max of a[] = %d",find_max(a, n));
  return 0;
}

