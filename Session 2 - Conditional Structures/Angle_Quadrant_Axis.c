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
  int angle;
  printf ("\n Input angle (<360) : ");
  scanf ("%d", &angle);
  if (angle == 0)
    printf ("\n %d angle lies on the positive X axis.", angle);
  else if (angle > 0 && angle < 90)
    printf ("\n %d angle lies in the first quadrant.", angle);
  else if (angle == 90)
    printf ("\n %d angle lies on the positive Y axis.", angle);
  else if (angle > 90 && angle < 180)
    printf ("\n %d angle lies in the second quadrant.", angle);
  else if (angle == 180)
    printf ("\n %d angle lies on the negative X axis.", angle);
  else if (angle > 180 && angle < 270)
    printf ("\n %d angle lies in the third quadrant.", angle);
  else if (angle == 270)
    printf ("\n %d angle lies on the negative Y axis.", angle);
  else if (angle > 270 && angle < 360)
    printf ("\n %d angle lies in the fourth quadrant.", angle);
  else
    printf ("\n Enter angle less than 360 degrees.");
  return 0;
}

/******************************************************************************
Output:

 Input angle (<360) : 100

 100 angle lies in the second quadrant.

*******************************************************************************/
