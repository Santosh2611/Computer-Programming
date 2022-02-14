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
  char word[25][50], temp[25];
  int i, j;
  printf ("\nInput the seven words one-by-one (one word in one line):\n");
  for (i = 0; i <= 6; i++)
    fgets (word[i], sizeof (word), stdin);
  for (i = 0; i <= 5; i++)
    {
      for (j = 0; j <= 5 - i; j++)
	if (strcmp (word[j], word[j + 1]) > 0)
	  {
	    strcpy (temp, word[j]);
	    strcpy (word[j], word[j + 1]);
	    strcpy (word[j + 1], temp);
	  }
    }
  printf ("\nThe sorted words are:\n");
  for (i = 0; i <= 6; i++)
    printf ("%s", word[i]);
  return 0;
}

/******************************************************************************

Output:

Input the seven words one-by-one (one word in one line):

one

two

three

four

five

six

seven



The sorted words are:

five

four

one

seven

six

three

two

*******************************************************************************/




