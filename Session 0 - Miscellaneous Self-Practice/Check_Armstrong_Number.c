/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int
main ()
{
  int number, num, n = 0, rem, result;
  printf ("\n Input an integer: ");
  scanf ("%d", &number);
  num = number;
  while (num != 0)
    {
      num /= 10;
      n++;
    }
  num = number;
  while (num != 0)
    {
      rem = num % 10;
      result += pow (rem, n);
      num /= 10;
    }
  if (number == result)
    printf ("\n %d is an Armstrong Number.", number);
  else
    printf ("\n %d is not an Armstrong Number.", number);
  return 0;
}

/******************************************************************************
Output:

 Input an integer: 1634

 1634 is an Armstrong Number.

*******************************************************************************/
