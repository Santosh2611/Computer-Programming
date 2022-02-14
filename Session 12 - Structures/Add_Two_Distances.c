/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Distance
{
  int feet;
  float inch;
} d1, d2, result;

int
main ()
{
  printf ("\n Enter first distance:-");
  printf ("\n Enter feet and inch: ");
  scanf ("%d %f", &d1.feet, &d1.inch);
  printf ("\n Enter second distance:-");
  printf ("\n Enter feet and inch: ");
  scanf ("%d %f", &d2.feet, &d2.inch);

  // adding distances
  result.feet = d1.feet + d2.feet;
  result.inch = d1.inch + d2.inch;

  // convert inches to feet if greater than 12
  while (result.inch >= 12.0)
    {
      result.inch = result.inch - 12.0;
      ++result.feet;
    }
  printf ("\n Sum of distances = %d\' %.2f\"", result.feet, result.inch);
  return 0;
}

/******************************************************************************

Output:

 Enter first distance:-

 Enter feet and inch: 3 7



 Enter second distance:-

 Enter feet and inch: 4 10



 Sum of distances = 8' 5.00"

*******************************************************************************/

