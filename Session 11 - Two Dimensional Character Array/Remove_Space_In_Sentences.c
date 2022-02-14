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
  char str[50][100], temp[50][100];
  int i, j, count = 0, length;
  printf
    ("\nInput the four sentences one-by-one (one sentence in one line):\n");
  for (i = 0; i <= 3; i++)
    fgets (str[i], sizeof (str), stdin);
  for (i = 0; i <= 3; i++)
    {
      length = strlen (str[i]);
      count = 0;
      for (j = 0; j <= length - 1; j++)
	{
	  if (str[i][j] != ' ')
	    temp[i][count++] = str[i][j];
	}
    }
  printf ("\nThe required sentences are:\n");
  for (i = 0; i <= 3; i++)
    printf ("%s", temp[i]);
  return 0;
}

/******************************************************************************

Output:

Input the four sentences one-by-one (one sentence in one line):

Roses are red.

Sky is blue.

Sun rises in the East.

Orange is orange.



The required sentences are:

Rosesarered.

Skyisblue.

SunrisesintheEast.

Orangeisorange.

*******************************************************************************/




