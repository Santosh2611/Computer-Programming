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
  int radius;
  float perimeter, area;
  radius = 6;
  printf ("\n The radius of the circle is 6 inches.");
  perimeter = (2 * 3.14 * radius);
  printf ("\n The perimeter of the circle is: %f inches.", perimeter);
  area = (3.14 * radius * radius);
  printf ("\n The area of the circle is: %f square inches.", area);
  return 0;
}

/******************************************************************************
Output:

 The radius of the circle is 6 inches.
 The perimeter of the circle is: 37.680000 inches.
 The area of the circle is: 113.040001 square inches.

*******************************************************************************/

