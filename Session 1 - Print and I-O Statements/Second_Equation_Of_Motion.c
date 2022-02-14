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
  float u, t, a, s;
  printf ("\n Enter the value of initial velocity (u): ");
  scanf ("%f", &u);
  printf ("\n Enter the value of acceleration (a): ");
  scanf ("%f", &a);
  printf ("\n Enter the value of time (t): ");
  scanf ("%f", &t);
  s = ((u * t) + (a * t * t) / 2);
  printf ("\n Therefore, the value of distance is %f units.", s);
  return 0;
}

/******************************************************************************

 Enter the value of initial velocity (u): 1

 Enter the value of acceleration (a): 1

 Enter the value of time (t): 1

 Therefore, the value of distance is 1.500000 units.

*******************************************************************************/
