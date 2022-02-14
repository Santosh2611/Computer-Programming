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
  int count = 0, number, num1, rem1, rev1 = 0, result, num2, rem2, rev2 = 0;
  printf ("\n Input a number: ");
  scanf ("%d", &number);
  do
    {
      rev1 = 0, rev2 = 0;
      num1 = number;
      while (num1 != 0)
	{
	  rem1 = num1 % 10;
	  rev1 = (rev1 * 10) + rem1;
	  num1 = num1 / 10;
	}
      result = number + rev1;
      printf ("\n %d + %d = %d", number, rev1, result);
      num2 = result;
      while (num2 != 0)
	{
	  rem2 = num2 % 10;
	  rev2 = (rev2 * 10) + rem2;
	  num2 = num2 / 10;
	}
      if (result == rev2)
	{
	  count = 1;
	  printf ("\n Palindrome!");
	  break;
	}
      else
	{
	  count = count + 1;
	  number = result;
	}
    }
  while (count < 10 && count >= 1);
  if (count == 10)
    printf ("\n None!\n Last Sum: %d", result);
  return 0;
}

/******************************************************************************
Output:

 Input a nummber: 87

 87 + 78 = 165
 165 + 561 = 726
 726 + 627 = 1353
 1353 + 3531 = 4884
 Palindrome!

*******************************************************************************/


