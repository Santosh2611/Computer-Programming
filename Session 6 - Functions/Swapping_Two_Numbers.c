/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void
swap (int c, int d)
{
  int temp;
  temp = c;
  c = d;
  d = temp;
  printf ("\n The first number after swapping becomes %d.", c);
  printf ("\n The second number after swapping becomes %d.", d);
}

int
main ()
{
  int a, b;
  printf ("\n Input the first number: ");
  scanf ("%d", &a);
  printf ("\n Input the second number: ");
  scanf ("%d", &b);
  swap (a, b);
  return 0;
}

/******************************************************************************
Output:

 Input the first number: 7

 Input the second number: 18

 The first number after swapping becomes 18.
 The second number after swapping becomes 7.

*******************************************************************************/


