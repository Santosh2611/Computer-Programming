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
  int a, b, temp;
  printf ("\n Enter the first number: ");
  scanf ("%d", &a);
  printf ("\n Enter the second number: ");
  scanf ("%d", &b);
  temp = a;
  a = b;
  b = temp;
  printf ("\n The first number after swapping is %d.", a);
  printf ("\n The second number after swapping is %d.", b);
  return 0;
}

/******************************************************************************
Output:

 Enter the first number: 2

 Enter the second number: 3

 The first number after swapping is 3.
 The second number after swapping is 2.

*******************************************************************************/

