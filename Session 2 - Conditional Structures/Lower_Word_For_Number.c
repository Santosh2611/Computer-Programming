/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int N;
  printf ("\n Input a positive integer: ");
  scanf ("%d", &N);
  if (N == 1)
    printf ("\n one");
  else if (N == 2)
    printf ("\n two");
  else if (N == 3)
    printf ("\n three");
  else if (N == 4)
    printf ("\n four");
  else if (N == 5)
    printf ("\n five");
  else if (N == 6)
    printf ("\n six");
  else if (N == 7)
    printf ("\n seven");
  else if (N == 8)
    printf ("\n eight");
  else if (N == 9)
    printf ("\n nine");
  else
    printf ("\n Greater than 9");
  return 0;
}

/******************************************************************************
Output:

 Input a positive integer: 7

 seven

*******************************************************************************/

