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
  char str[300];
  int i;
  printf ("\nEnter a string: ");
  fgets (str, sizeof str, stdin);
  printf ("\nThe resultant after replacing space(s) with dot(s) is:\n");
  for (i = 0; str[i] != '\0'; i++)
    {
      if (isupper (str[i]))
	putchar (tolower (str[i]));
      else if (islower (str[i]))
	putchar (toupper (str[i]));
      else if (str[i] == ' ')
	putchar (str[i] = '.');
      else
	putchar (str[i]);
    }
  return 0;
}

/******************************************************************************

Output:

Enter a string: This program reads a sentence and converts all uppercase letters into lowercase letters and vice-versa. The white spaces are replaced with a specific character '.' here.



The resultant after replacing space(s) with dot(s) is:

tHIS.PROGRAM.READS.A.SENTENCE.AND.CONVERTS.ALL.UPPERCASE.LETTERS.INTO.LOWERCASE.LETTERS.AND.VICE-VERSA..tHE.SPACES.ARE.REPLACED.WITH.A.SPECIFIC.CHARACTER.'.'.HERE.

*******************************************************************************/



