/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  char str1[50], str2[50], str3[50], ch;
  int i = 0;

  //Input and print string using scanf()
  printf ("\n\t\t\t Using scanf()");
  printf ("\n Enter a string: ");
  scanf ("%s", str1);
  printf ("\n The string is %s.", str1);

  //Input and print string using getchar()
  printf ("\n\t\t\t Using getchar()");
  printf ("\n Enter a string: ");
  while (ch != '\n')
    {
      ch = getchar ();
      str2[i] = ch;
      i++;
    }
  str2[i] = '\0';
  printf ("\n The string is %s.", str2);

  //Input and print string using gets()
  printf ("\n\t\t\t Using gets()");
  printf ("\n Enter a string: ");
  gets (str3);
  printf ("\n The string is ");
  puts (str3);

  return 0;
}

/******************************************************************************

Output:


			 Using scanf()

 Enter a string: My name is Santosh.



 The string is My.

			 Using getchar()

 Enter a string: 

 The string is  name is Santosh.

.

			 Using gets()

 Enter a string: I like coding in C.



 The string is I like coding in C.

*******************************************************************************/




