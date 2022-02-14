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
  int hundred, fifty, twenty, amount;
  printf ("\n Enter the number of Rs. 100/- notes: ");
  scanf ("%d", &hundred);
  printf ("\n Enter the number of Rs. 50/- notes: ");
  scanf ("%d", &fifty);
  printf ("\n Enter the number of Rs. 20/- notes: ");
  scanf ("%d", &twenty);
  amount = ((100 * hundred) + (50 * fifty) + (20 * twenty));
  printf ("\n Therfeore, the amount sums to Rs. %d/-", amount);
  return 0;
}

/******************************************************************************

 Enter the number of Rs. 100/- notes: 5

 Enter the number of Rs. 50/- notes: 3

 Enter the number of Rs. 20/- notes: 20

 Therfeore, the amount sums to Rs. 1050/-

*******************************************************************************/

