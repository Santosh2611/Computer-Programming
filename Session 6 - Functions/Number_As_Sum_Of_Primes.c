/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sum_of_two_primes (int n);

int
main ()
{
  int n, i;
  printf ("\n Enter a number: ");
  scanf ("%d", &n);
  int flag = 0;
  for (i = 2; i <= n / 2; i++)
    {
// Condition for i to be prime
      if (sum_of_two_primes (i) == 1)
	{
	  if (sum_of_two_primes (n - i) == 1)
	    {
	      printf ("\n %d = %d + %d", n, i, n - i);
	      flag++;
	    }
	}
    }
  if (flag == 0)
    printf ("\n %d cannot be expressed as the sum of two prime numbers.", n);
  return 0;
}

//function to check if a number is prime or not
int
sum_of_two_primes (int n)
{
  int i, isPrime = 1;
  for (i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
	{
	  isPrime = 0;
	  break;
	}
    }
  return isPrime;
}

/******************************************************************************
Output:

 Enter a number: 34

 34 = 3 + 31
 34 = 5 + 29
 34 = 11 + 23
 34 = 17 + 17

*******************************************************************************/

