/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int sum_range (int);

int
main ()
{
  int n;
  int sum;
  printf ("\n Enter the range value (n): ");
  scanf ("%d", &n);
  sum = sum_range (n);
  printf ("\n The sum of numbers from 1 to %d is %d.", n, sum);
  return 0;
}

int
sum_range (int limit)
{
  int result;
  if (limit == 1)
    return 1;
  else
    result = limit + sum_range (limit - 1);	//calling the function sum_range itself
  return (result);
}

/******************************************************************************

Output:

 Enter the range value (n): 7

 The sum of numbers from 1 to 7 is 28.

*******************************************************************************/


