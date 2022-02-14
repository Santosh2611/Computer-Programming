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
  int side, length, breadth, perimeter, area;
  printf ("\n Enter the side length of the square: ");
  scanf ("%d", &side);
  perimeter = (4 * side);
  printf ("\n Therefore, the perimeter of the square is: %d", perimeter);
  area = (side * side);
  printf ("\n Therefore, the area of the square is: %d", area);
  printf
    ("\n-----------------------------------------------------------------------\n");
  printf ("\n Enter the length of the rectangle: ");
  scanf ("%d", &length);
  printf ("\n Enter the breadth of the rectangle: ");
  scanf ("%d", &breadth);
  perimeter = (2 * (length + breadth));
  printf ("\n Therefore, the perimeter of the square is: %d", perimeter);
  area = (length * breadth);
  printf ("\n Therefore, the area of the square is: %d", area);
  return 0;
}

/******************************************************************************

 Enter the side length of the square: 4

 Therefore, the perimeter of the square is: 16
 Therefore, the area of the square is: 16
-----------------------------------------------------------------------

 Enter the length of the rectangle: 2

 Enter the breadth of the rectangle: 3

 Therefore, the perimeter of the square is: 10
 Therefore, the area of the square is: 6

*******************************************************************************/

