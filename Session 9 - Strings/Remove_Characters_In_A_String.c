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
  int i, j;
  printf ("\n Enter the string: ");
  fgets (str, sizeof (str), stdin);
  for (i = 0; str[i] != '\0'; i++)
    {
      while (!(isalpha (str[i])) && !(str[i] == '\0'))
	{
	  for (j = i; str[j] != '\0'; j++)
	    str[j] = str[j + 1];
	  str[j] = '\0';
	}
    }
  printf ("\n Output String: ");
  puts (str);
  return 0;
}

/******************************************************************************

Output:


 Enter the string: $aN!0$H



 Output String: aNH

*******************************************************************************/




