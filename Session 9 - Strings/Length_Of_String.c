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
  int length1 = 0, length2 = 0, i;

  //Length using library function
  printf ("\n\t\t\t Using Library Function");
  printf ("\n Enter a string: ");
  scanf ("%s", str1);
  length1 = strlen (str1);
  printf ("\n The length of the string '%s' is %d.", str1, length1);
  printf ("\n");

  //Length without using library function
  printf ("\n\t\t     Without Using Library Function");
  printf ("\n Enter a string: ");
  scanf ("%s", str2);
  for (i = 0; str2[i] != '\0'; i++)
    length2++;
  printf ("\n The length of the string '%s' is %d.", str2, length2);

  return 0;
}
