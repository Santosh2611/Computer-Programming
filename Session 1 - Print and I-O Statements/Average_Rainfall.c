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
  float rain1, rain2, rain3, avg;
  printf ("\n Input the rainfall for the first day: ");
  scanf ("%f", &rain1);
  printf ("\n Input the rainfall for the second day: ");
  scanf ("%f", &rain2);
  printf ("\n Input the rainfall for the third day: ");
  scanf ("%f", &rain3);
  avg = (rain1 + rain2 + rain3) / 3;
  printf
    ("\n Therefore, the average rainfall on the these three consecutive days is : %f units.",
     avg);
  return 0;
}

/******************************************************************************

 Input the rainfall for the first day: 3

 Input the rainfall for the second day: 2

 Input the rainfall for the third day: 1

 Therefore, the average rainfall on the these three consecutive days is : 2.000000 units.

*******************************************************************************/