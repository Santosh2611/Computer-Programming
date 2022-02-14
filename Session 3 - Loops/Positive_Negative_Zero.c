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
  int number, choice;
  do
    {
      printf ("\n Enter a number: ");
      scanf ("%d", &number);
      if (number > 0)
	printf ("\n %d is a POSITIVE number.", number);
      else if (number < 0)
	printf ("\n %d is a NEGATIVE number.", number);
      else
	printf ("\n %d (ZERO) is neither POSITIVE nor NEGATIVE number.",
		number);
      printf
	("\n To test for another input, enter 1 to continue or another number key to terminate the program: ");
      scanf ("%d", &choice);
    }
  while (choice == 1);
  return 0;
}

/******************************************************************************
Output:

 Enter a number: 7

 7 is a POSITIVE number.
 To test for another input, enter 1 to continue or another number key to terminate the program: 1

 Enter a number: 0

 0 (ZERO) is neither POSITIVE nor NEGATIVE number.
 To test for another input, enter 1 to continue or another number key to terminate the program: 1

 Enter a number: -18

 -18 is a NEGATIVE number.
 To test for another input, enter 1 to continue or another number key to terminate the program: 2

*******************************************************************************/


