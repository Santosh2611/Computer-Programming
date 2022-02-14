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
  int count_vowel = 0, count_consonant = 0, i;
  printf ("\n Enter a string: ");
  scanf ("%s", str);
  for (i = 0; str[i] != '\0'; i++)
    {
      if (isalpha (str[i]))
	{
	  if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'
	      || str[i] == 'U' || str[i] == 'a' || str[i] == 'e'
	      || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
	    count_vowel++;
	  else
	    count_consonant++;
	}
    }
  printf ("\n The count of vowel(s) in string |%s| is %d.", str, count_vowel);
  printf ("\n The count of consonant(s) in string |%s| is %d.", str,
	  count_consonant);
  return 0;
}

/******************************************************************************

Output:

 Enter a string: Apple



 The count of vowel(s) in string |Apple| is 2.

 The count of consonant(s) in string |Apple| is 3.

*******************************************************************************/

