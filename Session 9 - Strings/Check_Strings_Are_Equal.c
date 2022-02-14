/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int
main ()
{
  char str1[25];
  char str2[25];
  int compare;
  printf ("\n Enter the first string: ");
  scanf ("%s", str1);
  printf ("\n Enter the second string: ");
  scanf ("%s", str2);

  //Comparing both the strings using strcmp() function  
  compare = strcmp (str1, str2);
  if (compare == 0)
    printf ("\n String 1 |%s| and String 2 |%s| are equal.", str1, str2);
  else
    printf ("\n String 1 |%s| and String 2 |%s| are not equal.", str1, str2);
  return 0;
}

/******************************************************************************

Output:


 Enter the first string: Programming



 Enter the second string: Programming



 String 1 |Programming| and String 2 |Programming| are equal.

*******************************************************************************/
