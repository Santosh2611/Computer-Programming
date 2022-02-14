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
  float inch, cm;
  printf
    ("\n Enter the value of length in inches to convert it into centimeters (cm): ");
  scanf ("%f", &cm);
  inch = cm / 2.54;
  printf ("\n 1 inch = 2.54 cm.");
  printf ("\n Therefore, %f inch(es) = %f cm.", inch, cm);

  return 0;
}

/******************************************************************************

 Enter the value of length in inches to convert it into centimeters (cm): 2.54

 1 inch = 2.54 cm.
 Therefore, 1.000000 inch(es) = 2.540000 cm.


*******************************************************************************/

