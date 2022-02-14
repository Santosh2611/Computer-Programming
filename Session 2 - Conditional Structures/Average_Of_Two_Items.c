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
  float weight1, item1, weight2, item2, avg;
  printf ("\n Weight - Item 1: ");
  scanf ("%f", &weight1);
  printf ("\n No. of item1: ");
  scanf ("%f", &item1);
  printf ("\n Weight - Item 2: ");
  scanf ("%f", &weight2);
  printf ("\n No. of item2: ");
  scanf ("%f", &item2);
  avg = ((weight1 * item1) + (weight2 * item2)) / (item1 + item2);
  printf ("\n Average Value = %f", avg);
  return 0;
}

/******************************************************************************
Output:

 Weight - Item 1: 15

 No. of item1: 5

 Weight - Item 2: 25

 No. of item2: 4

 Average Value = 19.444445

*******************************************************************************/


