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
  float dividend, divisor, quo1, rem;
  int quo2;
  printf ("\n Enter the dividend: ");
  scanf ("%f", &dividend);
  printf ("\n Enter the divisor: ");
  scanf ("%f", &divisor);
  quo1 = dividend / divisor;
  quo2 = dividend / divisor;
  rem = dividend - divisor * quo2;
  printf ("\n The quotient is: %0.2f", quo1);
  printf ("\n The remainder is: %0.2f", rem);
  return 0;
}

/******************************************************************************
Output:

 Enter the dividend: 26

 Enter the divisor: 15

 The quotient is: 1.73
 The remainder is: 11.00

*******************************************************************************/

