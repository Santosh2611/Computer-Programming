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
  int a = 125, b = 12345;
  long ax = 1234567890;
  short s = 4043;
  float x = 2.13459;
  double dx = 1.1415927;
  char c = 'W';
  unsigned long ux = 2541567890;
  printf ("\n a + c =  %d", a + c);
  printf ("\n x + c = %f", x + c);
  printf ("\n dx + x = %f", dx + x);
  printf ("\n ((int) dx) + ax =  %ld", ((int) dx) + ax);
  printf ("\n a + x = %f", a + x);
  printf ("\n s + b =  %d", s + b);
  printf ("\n ax + b = %ld", ax + b);
  printf ("\n s + c =  %hd", s + c);
  printf ("\n ax + c = %ld", ax + c);
  printf ("\n ax + ux = %lu", ax + ux);
  return 0;
}

/******************************************************************************
Output:

 a + c =  212
 x + c = 89.134590
 dx + x = 3.276183
 ((int) dx) + ax =  1234567891
 a + x = 127.134590
 s + b =  16388
 ax + b = 1234580235
 s + c =  4130
 ax + c = 1234567977
 ax + ux = 3776135780

*******************************************************************************/



