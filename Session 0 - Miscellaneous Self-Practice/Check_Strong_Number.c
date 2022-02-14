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
  int number, num, fact, rem, temp, sum = 0;
  printf ("\n Input a number to check whether it is Strong number: ");
  scanf ("%d", &number);
  num = number;
  while (num > 0)
    {
      fact = 1;
      rem = num % 10;
      for (temp = 1; temp <= rem; temp++)
	fact = fact * temp;
      sum = sum + fact;
      num = num / 10;
    }
  if (number == sum)
    printf ("\n %d is a Strong number.", number);
  else
    printf ("\n %d is not a Strong number.", number);
  return 0;
}

/******************************************************************************
Output:

 Input a number to check whether it is Strong number: 15

 15 is not a Strong number.

*******************************************************************************/
