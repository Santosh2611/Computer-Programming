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
  int id, year;
  float principal, t, si, amount;
  printf ("\n Input User ID (Enter '-' if no bank account) : ");
  scanf ("%d", &id);
  printf ("\n Input Principal Amount: ");
  scanf ("%f", &principal);
  printf ("\n Input Time Period: ");
  scanf ("%f", &t);
  year = id % 10000;
  if (year < 2005)
    {
      si = (principal * 10 * t) / 100;
      amount = principal + si;
      printf ("\n Amount to repay: Rs. %0.2f/-", amount);
    }
  else if (year >= 2005)
    {
      si = (principal * 20 * t) / 100;
      amount = principal + si;
      printf ("\n Amount to repay: Rs. %0.2f/-", amount);
    }
  else
    {
      si = (principal * 25 * t) / 100;
      amount = principal + si;
      printf ("\n Amount to repay: Rs. %0.2f/-", amount);
    }
  return 0;
}

/******************************************************************************
Output:

 Input User ID (Enter '-' if no bank account) : 221999

 Input Principal Amount: 100000

 Input Time Period: 3

 Amount to repay: Rs. 130000.00/-

*******************************************************************************/

