/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  char a;
  unsigned char b;
  short int c;
  int d;
  unsigned int e;
  long int f;
  unsigned long int g;
  long long int h;
  float i;
  double j;
  long double k;
  printf ("\n char: %lu", sizeof (a));
  printf ("\n unsigned char: %lu", sizeof (b));
  printf ("\n short int: %lu", sizeof (c));
  printf ("\n int: %lu", sizeof (d));
  printf ("\n unsigned int: %lu", sizeof (e));
  printf ("\n long int: %lu", sizeof (f));
  printf ("\n unsigned long int: %lu", sizeof (g));
  printf ("\n long long int: %lu", sizeof (h));
  printf ("\n float: %lu", sizeof (i));
  printf ("\n double: %lu", sizeof (j));
  printf ("\n long double: %lu", sizeof (k));
}

/******************************************************************************
Output:

 char: 1
 unsigned char: 1
 short int: 2
 int: 4
 unsigned int: 4
 long int: 8
 unsigned long int: 8
 long long int: 8
 float: 4
 double: 8
 long double: 16

*******************************************************************************/

