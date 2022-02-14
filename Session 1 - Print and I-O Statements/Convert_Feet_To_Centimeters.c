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
  float feet, cm;
  printf
    ("\n Enter the value of length in feet to convert it into centimeters (cm): ");
  scanf ("%f", &feet);
  cm = (feet * 30.84);
  printf ("\n 1 feet = 30.48 cm.");
  printf ("\n Therefore, %f feet = %f cm.", feet, cm);

  return 0;
}

/******************************************************************************

 Enter the value of length in feet to convert it into centimeters (cm): 6

 1 feet = 30.48 cm.
 Therefore, 6.000000 feet = 185.039993 cm.


*******************************************************************************/