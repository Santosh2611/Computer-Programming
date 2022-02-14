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
  int num, temp, count = 0;
  printf ("\n Input a positive number: ");
  scanf ("%d", &num);
  if (num <= 0)
    printf ("\n Invalid check.");
  else if (num == 1)
    printf ("\n %d is neither prime nor composite.", num);
  else
    {
      for (temp = 2; temp <= num / 2; temp++)
	{
	  if (num % temp == 0)
	    count = count + 1;
	}
      if (count == 0)
	printf ("\n %d is a prime number.", num);
      else
	printf ("\n %d is not a prime number.", num);
    }
  return 0;
}

/******************************************************************************
Output:

 Input a positive number: 7

 7 is a prime number.

*******************************************************************************/


