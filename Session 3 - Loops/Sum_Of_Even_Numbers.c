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
  int i = 0, sum = 0;
  while (i <= 10)
    {
      sum = sum + i;
      i = i + 2;
    }
  printf ("\n Sum of even numbers until 10 using while loop is %d.", sum);
  printf
    ("\n -------------------------------------------------------------------");
  sum = 0;
  for (i = 0; i <= 10; i += 2)
    sum = sum + i;
  printf ("\n Sum of even numbers until 10 using for loop is %d.", sum);
  return 0;
}

/******************************************************************************
Output:

 Sum of even numbers until 10 using while loop is 30.
 -------------------------------------------------------------------
 Sum of even numbers until 10 using for loop is 30.

*******************************************************************************/

