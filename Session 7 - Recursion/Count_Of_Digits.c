/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int count_of_digits (int num);

int
main ()
{
  int number, count = 0;
  printf ("\n Input a number: ");
  scanf ("%d", &number);
  count = count_of_digits (number);
  printf ("\n The number of digits in %d is %d.", number, count);
  return 0;
}

int
count_of_digits (int num)
{
  static int counter = 0;	//Static variables have a property of preserving their value even after they are out of their scope.
  if (num > 0)
    {
      counter = counter + 1;
      return count_of_digits (num / 10);
    }
  else
    return counter;
}

/******************************************************************************

Output:

 Input a number: 18

 The number of digits in 18 is 2.

*******************************************************************************/

