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
  int a, b, sum, diff, prod, quo, rem;
  printf ("\n Enter the first integer, say a: ");
  scanf ("%d", &a);
  printf ("\n Enter the second integer, say b: ");
  scanf ("%d", &b);
  sum=a+b;
  diff=a-b;
  prod=a*b;
  quo=a/b;
  rem=a%b;
  printf ("\n The sum, %d + %d = %d", a, b, sum);
  printf ("\n The difference, %d - %d = %d", a, b, diff);
  printf ("\n The product, %d * %d = %d", a, b, prod);
  printf ("\n The quotient obtained when %d divided with %d = %d", a, b, quo);
  printf ("\n The remainder obtained when %d is divided with %d = %d", a, b, rem);
  return 0;
}

/******************************************************************************

 Output:
 
 Enter the first integer, say a: 10
 
 Enter the second integer, say b: 5

 The sum, 10 + 5 = 15
 The difference, 10 - 5 = 5
 The product, 10 * 5 = 50
 The quotient obtained when 10 divided with 5 = 2
 The remainder obtained when 10 is divided with 5 = 0

*******************************************************************************/
