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
  int a, b, c, square, cube;
  printf ("\n Enter the three numbers in the order as asked below.");
  printf ("\n Enter the first number: ");
  scanf ("%d", &a);
  square = (a * a);
  cube = (a * a * a);
  printf ("\n The square and cube of %d is %d and %d respectively. ", a,
	  square, cube);
  printf ("\n Enter the second number: ");
  scanf ("%d", &b);
  square = (b * b);
  cube = (b * b * b);
  printf ("\n The square and cube of %d is %d and %d respectively. ", b,
	  square, cube);
  printf ("\n Enter the third number: ");
  scanf ("%d", &c);
  square = (c * c);
  cube = (c * c * c);
  printf ("\n The square and cube of %d is %d and %d respectively. ", c,
	  square, cube);
  return 0;
}

/******************************************************************************

 Enter the three numbers in the order as asked below.
 Enter the first number: 25

 The square and cube of 25 is 625 and 15625 respectively. 
 Enter the second number: 50

 The square and cube of 50 is 2500 and 125000 respectively. 
 Enter the third number: 75

 The square and cube of 75 is 5625 and 421875 respectively. 


*******************************************************************************/
