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
  int number, num, count = 0;
  printf ("\n Input a number: ");
  scanf ("%d", &number);
  num = number;
  do
    {
      num = num / 10;
      count = count + 1;
    }
  while (num != 0);
  printf ("\n %d is a %d-digit(s) number.", number, count);
  return 0;
}

/******************************************************************************
Output:

 Input a number: 18

 18 is a 2-digit(s) number.

*******************************************************************************/


