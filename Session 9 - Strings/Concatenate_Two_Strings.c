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
  char str1[50], str2[50], str3[50], str4[50];
  int length, i;

  //Using Library Function
  printf ("\n\t\t\t Concatenate using Library Function");
  printf ("\n Enter the first string: ");
  gets (str1);
  printf ("\n Enter the second string: ");
  gets (str2);
  strcat (str1, str2);
  printf ("\n String obtained on concatenation is: %s", str1);
  printf ("\n");

  //Without Using Library Function
  printf ("\n\t\t    Concatenate without using Library Function");
  printf ("\n Enter the first string: ");
  gets (str3);
  printf ("\n Enter the second string: ");
  gets (str4);
  length = 0;
  while (str3[length] != '\0')
    length++;
  for (i = 0; str4[i] != '\0'; i++, length++)
    str3[length] = str4[i];
  str3[length] = '\0';
  printf ("\n String obtained on concatenation is: ");
  puts (str3);

  return 0;
}

/******************************************************************************

Output:


			 Concatenate using Library Function

 Enter the first string: C 



 Enter the second string: Programming



 String obtained on concatenation is: C Programming



		    Concatenate without using Library Function

 Enter the first string: using 



 Enter the second string: OnlineGDB



 String obtained on concatenation is: using OnlineGDB

*******************************************************************************/



