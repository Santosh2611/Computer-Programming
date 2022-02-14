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
  printf ("\n Input a postive integer: ");
  scanf ("%d", &number);
  num = number;
  while (num != 0)
    {
      num = num / 10;
      count = count + 1;
    }
  if (count == 1)
    printf ("\n %d is a %d-digit number.", number, count);
  else if (count == 2)
    printf ("\n %d is a %d-digit number.", number, count);
  else if (count == 3)
    printf ("\n %d is a %d-digit number.", number, count);
  else
    printf ("\n %d is a %d-digit number (more than 3-digits).", number,
	    count);

  return 0;
}

/******************************************************************************
Output:

 Input a postive integer: 1234

 1234 is a 4-digit number (more than 3-digits).

*******************************************************************************/

