/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int
main ()
{
  char str1[50], str2[50];
  printf ("\n Enter the string: ");
  scanf ("%s", str1);
  strcpy (str2, str1);
  printf ("\n String 1: %s\n String 2: %s", str1, str2);
  return 0;
}

/******************************************************************************

Output:


 Enter the string: Programming



 String 1: Programming

 String 2: Programming

*******************************************************************************/

