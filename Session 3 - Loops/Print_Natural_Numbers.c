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
  int n, i = 0;
  printf ("\n Enter a positive integer n: ");
  scanf ("%d", &n);
  printf ("\n All the natural numbers from 1 to %d: ", n);
  while (i < n)
    {
      i = i + 1;
      printf ("\n %d", i);
    }
  printf
    ("\n ---------------------------------------------------------------------");
  i = n + 1;
  printf ("\n All the natural numbers from %d to 1: ", n);
  while (i > 1)
    {
      i = i - 1;
      printf ("\n %d", i);
    }
  return 0;
}

/******************************************************************************
Output:

 Enter a positive integer n: 7

 All the natural numbers from 1 to 7: 
 1
 2
 3
 4
 5
 6
 7
 ---------------------------------------------------------------------
 All the natural numbers from 7 to 1: 
 7
 6
 5
 4
 3
 2
 1

*******************************************************************************/

