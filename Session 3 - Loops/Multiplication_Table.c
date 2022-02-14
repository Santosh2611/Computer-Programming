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
  int number, multiples, i;
  printf ("\n Input a number: ");
  scanf ("%d", &number);
  printf ("\n Input the number of multiples: ");
  scanf ("%d", &multiples);
  printf ("\n The multiplication table of %d is as follows: ", number);
  for (i = 0; i <= multiples; i++)
    printf ("\n %d X %d = %d", number, i, number * i);
  return 0;
}

/******************************************************************************
Output:

 Input a number: 7

 Input the number of multiples: 10

 The multiplication table of 7 is as follows: 
 7 X 0 = 0
 7 X 1 = 7
 7 X 2 = 14
 7 X 3 = 21
 7 X 4 = 28
 7 X 5 = 35
 7 X 6 = 42
 7 X 7 = 49
 7 X 8 = 56
 7 X 9 = 63
 7 X 10 = 70

*******************************************************************************/

