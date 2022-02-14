/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

void maximum (char s[50]);
void frequency (char s[50]);

int
main ()
{
  char str[50];
  int i, count_alpha = 0, count_digit = 0, count_sc = 0;
  printf ("\n Enter a string: ");
  scanf ("%s", str);
  for (i = 0; str[i] != '\0'; i++)
    {
      if (isalpha (str[i]))
	count_alpha++;
      else if (isdigit (str[i]))
	count_digit++;
      else
	count_sc++;
    }
  printf ("\n The number of alphabets in %s is %d.", str, count_alpha);
  printf ("\n The number of digits in %s is %d.", str, count_digit);
  printf ("\n The number of special characters in %s is %d.", str, count_sc);
  printf ("\n");
  maximum (str);
  printf ("\n");
  frequency (str);
  return 0;
}

void
maximum (char s[50])
{
  int i, char_num = 255, frequency[char_num], ascii, max, maxi;
  for (i = 0; i < char_num; i++)
    frequency[i] = 0;
  i = 0;
  while (s[i] != '\0')
    {
      ascii = (int) s[i];
      frequency[ascii] += 1;
      i++;
    }
  max = 0;
  for (i = 0; i < char_num; i++)
    {
      if (frequency[i] > frequency[max])
	{
	  maxi = frequency[i];
	  max = i;
	}
    }
  for (i = 0; i < char_num; i++)
    {
      if (frequency[i] == maxi)
	printf
	  ("\n The maximum occurring character is %c repeating %d time(s).",
	   i, maxi);
    }
}

void
frequency (char s[50])
{
  char alpha;
  int i, freq = 0;
  printf ("\n Enter the frequency of character you want to find: ");
  scanf (" %c", &alpha);
  for (i = 0; s[i] != '\0'; i++)
    {
      if (s[i] == alpha)
	freq++;
    }
  printf ("\n The character %c occurs %d time(s).", alpha, freq);
}

/******************************************************************************

Output:

 Enter a string: programming@2102!



 The number of alphabets in programming@2102! is 11.

 The number of digits in programming@2102! is 4.

 The number of special characters in programming@2102! is 2.



 The maximum occurring character is 2 repeating 2 time(s).

 The maximum occurring character is g repeating 2 time(s).

 The maximum occurring character is m repeating 2 time(s).

 The maximum occurring character is r repeating 2 time(s).



 Enter the frequency of character you want to find: a



 The character a occurs 1 time(s).

*******************************************************************************/


