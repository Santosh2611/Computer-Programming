/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void
main ()
{
  char str[50];
  int length, i;
  printf ("\nEnter a string: ");
  fgets (str, sizeof str, stdin);
  length = strlen (str);
  printf ("\nThe string in reverse is:");
  for (i = length; i >= 0; i--)
    {
      printf ("%c", str[i]);
    }
}

/******************************************************************************

Output:

Enter a string: My name is Santosh.

The string in reverse is:
.hsotnaS si eman yM

*******************************************************************************/

