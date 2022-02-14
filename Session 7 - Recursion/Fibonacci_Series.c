/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int fibonacci (int);

int
main ()
{
  int n, first, second;
  printf ("\n Enter the range value (n): ");
  scanf ("%d", &n);
  first = 0;
  second = 1;
  printf ("\n Fibonacci Series: %d %d", first, second);
  fibonacci (n - 2); //n-2 because 2 numbers are already printed
  return 0;
}

int
fibonacci (int limit)
{
  static int limit1 = 0, limit2 = 1, limit3; //static int variable remains in memory while the program is running
  if (limit > 0)
    {
      limit3 = limit1 + limit2;
      printf (" %d", limit3);
      limit1 = limit2;
      limit2 = limit3;
      fibonacci (limit - 1);
    }
}

/******************************************************************************

Output:

 Enter the range value (n): 7

 Fibonacci Series: 0 1 1 2 3 5 8

*******************************************************************************/