/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
prime (int number)
{
  int temp, flag = 1;
  for (temp = 2; temp <= number / 2; temp++)
    {
      if (number % temp == 0)
	flag = 0;
    }
  return flag;
}

int
main ()
{
  int a, b, i, check;
  printf ("\n Enter start limit: ");
  scanf ("%d", &a);
  printf ("\n Enter end limit: ");
  scanf ("%d", &b);
  printf ("\n The prime numbers between %d and %d are: ", a, b);
  for (i = a + 1; i < b; i++)
    {
      check = prime (i);
      if (check == 1)
	printf ("%d ", i);
    }
  return 0;
}

/******************************************************************************
Output:

 Enter start limit: 7

 Enter end limit: 18

 The prime numbers between 7 and 18 are: 11 13 17

*******************************************************************************/ 

