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
  char str1[50], ch, str2[50], result[50][50];
  int length1, i, j, counter, length2;

  //Bubble Sort String
  printf ("\nEnter a string to sort it in ascending order: ");
  fgets (str1, sizeof str1, stdin);
  length1 = strlen (str1);
  for (i = 0; i <= (length1 - 2); i++)
    {
      for (j = 0; j <= (length1 - i - 2); j++)
	{
	  if (str1[j] > str1[j + 1])
	    {
	      ch = str1[j];
	      str1[j] = str1[j + 1];
	      str1[j + 1] = ch;
	    }
	}
    }
  printf ("\nThe sorted string is: %s", str1);
  printf ("\n");

  //Split string by space into words
  printf ("\nEnter a string to split it by space into words: ");
  fgets (str2, sizeof str2, stdin);
  j = 0;
  counter = 0;
  length2 = strlen (str2);
  for (i = 0; i < length2; i++)
    {
      // If space or NULL found, assign NULL into result[counter]
      if (str2[i] == ' ' || str2[i] == '\0')
	{
	  result[counter][j] = '\0';
	  counter++;		//for next word
	  j = 0;		//for next word, init index to 0
	}
      else
	{
	  result[counter][j] = str2[i];
	  j++;
	}
    }
  printf ("\nThe resultant text is/are: \n");
  for (i = 0; i < counter + 1; i++)
    printf ("%s\n", result[i]);
  return 0;
}

/******************************************************************************

Output:

Enter a string to sort it in ascending order: programming



The sorted string is: 

aggimmnoprr



Enter a string to split it by space into words: I code using OnlineGDB compiler!



The resultant text is/are: 

I

code

using

OnlineGDB

compiler!

*******************************************************************************/






