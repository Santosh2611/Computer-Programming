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
  int pn, qs;
  float tp, fp;
  printf ("\n Input product number: ");
  scanf ("%d", &pn);
  printf ("\n Input quantity sold: ");
  scanf ("%d", &qs);
  if (pn == 1)
    {
      fp = qs * 2.98;
      printf ("\n Final Price: %f", fp);
    }
  else if (pn == 2)
    {
      tp = qs * 4.50;
      fp = tp - ((10 * tp) / 100);
      printf ("\n Final Price: %f", fp);
    }
  else if (pn == 3)
    {
      tp = qs * 9.98;
      fp = tp - ((10 * tp) / 100);
      printf ("\n Final Price: %f", fp);
    }
  else if (pn == 4)
    {
      fp = qs * 4.49;
      printf ("\n Final Price: %f", fp);
    }
  else if (pn == 5)
    {
      fp = qs * 6.87;
      printf ("\n Final Price: %f", fp);
    }
  else
    printf ("\n Invalid Product Number.");
  return 0;
}

/******************************************************************************
Output:

 Input product number: 3

 Input quantity sold: 2

 Final Price: 17.963999

*******************************************************************************/

