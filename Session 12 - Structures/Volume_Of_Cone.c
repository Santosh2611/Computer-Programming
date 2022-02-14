/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct cone
{
  int base_radius;
  int height;
} c;

int
main ()
{
  float volume;
  printf ("\n Enter base radius: ");
  scanf ("%d", &c.base_radius);
  printf ("\n Enter height: ");
  scanf ("%d", &c.height);
  volume = (3.14 * c.base_radius * c.base_radius * c.height) / 3;
  printf ("\n The volume of the cone is %.2f cubic units.", volume);
  return 0;
}

/******************************************************************************

Output:

 Enter base radius: 12



 Enter height: 13



 The volume of the cone is 1959.36 cubic units.

*******************************************************************************/

