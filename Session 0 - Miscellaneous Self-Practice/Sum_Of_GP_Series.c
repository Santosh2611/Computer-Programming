/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int
main ()
{
  float first, nt, r, sum = 0, i, gp;
  printf ("\n Input the first number of the G.P. series: ");
  scanf ("%f", &first);
  printf ("\n Input the number of terms in the G.P. series: ");
  scanf ("%f", &nt);
  printf ("\n Input the common ratio of G.P. series: ");
  scanf ("%f", &r);
  printf ("\n The numbers for the G.P. series: ");
  printf ("\n %f", first);
  sum = first;
  for (i = 1; i < nt; i++)
    {
      gp = first * pow (r, i);
      sum = sum + gp;
      printf ("\t %f", gp);
    }
  printf ("\n The Sum of the G.P. series : %f", sum);
  return 0;
}

/******************************************************************************
Output:

 Input the first number of the G.P. series: 3

 Input the number of terms in the G.P. series: 5

 Input the common ratio of G.P. series: 2

 The numbers for the G.P. series: 
 3.000000	 6.000000	 12.000000	 24.000000	 48.000000
 The Sum of the G.P. series : 93.000000

*******************************************************************************/

