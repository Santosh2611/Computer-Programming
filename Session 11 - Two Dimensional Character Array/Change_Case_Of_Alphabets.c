/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int
main ()
{
  char str[50][100];
  int i, j;
  printf
    ("\nInput the three words/sentences one-by-one (one word in one line):\n");
  for (i = 0; i <= 2; i++)
    fgets (str[i], sizeof (str), stdin);
  printf ("\nThe converted words/sentences are: \n");
  for (i = 0; i <= 2; i++)
    {
      for (j = 0; str[i][j] != '\0'; j++)
	{
	  if (isupper (str[i][j]))
	    putchar (tolower (str[i][j]));
	  else if (islower (str[i][j]))
	    putchar (toupper (str[i][j]));
	  else if (str[i][j] == ' ')
	    putchar (str[i][j] = ' ');
	  else
	    putchar (str[i][j]);
	}
    }
  return 0;
}

/******************************************************************************

Output:

Input the three words/sentences one-by-one (one word in one line):

My name is Santosh.

I study at Amrita Vishwa Vidyapeetham, Coimbatore.

I like programming!



The converted words/sentences are: 

mY NAME IS sANTOSH.

i STUDY AT aMRITA vISHWA vIDYAPEETHAM, cOIMBATORE.

i LIKE PROGRAMMING!

*******************************************************************************/
