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
  int number, years, months, days;
  printf ("\n Enter the number of days: ");
  scanf ("%d", &number);
  years = number / 365;
  printf ("\n %d Year(s)", years);
  months = (number - (365 * years)) / 30;
  printf ("\n %d Month(s)", months);
  days = (number - (365 * years) - (30 * months));
  printf ("\n %d Day(s)", days);

  return 0;
}

/******************************************************************************
Output:

 Enter the number of days: 2535

 6 Year(s)
 11 Month(s)
 15 Day(s)

*******************************************************************************/

