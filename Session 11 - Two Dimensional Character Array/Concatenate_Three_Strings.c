/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
main ()
{
  char str1[50], str2[50], str3[50];
  printf ("\n Enter the first string: ");
  gets (str1);
  printf (" Enter the second string: ");
  gets (str2);
  strcat (str1, str2);
  printf (" Enter the third string: ");
  gets (str3);
  strcat (str1, str3);
  printf (" The three strings after concatenation are: %s", str1);
  return 0;
}

/******************************************************************************

Output:

 Enter the first string: I

 Enter the second string: Love

 Enter the third string: Programming

 The three strings after concatenation are: ILoveProgramming

*******************************************************************************/

