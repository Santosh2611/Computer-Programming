/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int
main ()
{
  char str[50];
  int i;
  printf ("\n Enter a string: ");
  scanf ("%s", str);
  for (i = 0; str[i] != '\0'; i++)
    {
      if (islower (str[i]))
	printf ("\n Character %d - |%c| : Lowercase", i, str[i]);
      else if (isupper (str[i]))
	printf ("\n Character %d - |%c| : Uppercase", i, str[i]);
      else
	printf ("\n Character %d - |%c| : Not an alphabet", i, str[i]);
    }
  return 0;
}

/******************************************************************************

Output:


 Enter a string: CBENU4CCE20053_Santosh



 Character 0 - |C| : Uppercase

 Character 1 - |B| : Uppercase

 Character 2 - |E| : Uppercase

 Character 3 - |N| : Uppercase

 Character 4 - |U| : Uppercase

 Character 5 - |4| : Not an alphabet

 Character 6 - |C| : Uppercase

 Character 7 - |C| : Uppercase

 Character 8 - |E| : Uppercase

 Character 9 - |2| : Not an alphabet

 Character 10 - |0| : Not an alphabet

 Character 11 - |0| : Not an alphabet

 Character 12 - |5| : Not an alphabet

 Character 13 - |3| : Not an alphabet

 Character 14 - |_| : Not an alphabet

 Character 15 - |S| : Uppercase

 Character 16 - |a| : Lowercase

 Character 17 - |n| : Lowercase

 Character 18 - |t| : Lowercase

 Character 19 - |o| : Lowercase

 Character 20 - |s| : Lowercase

 Character 21 - |h| : Lowercase

*******************************************************************************/


