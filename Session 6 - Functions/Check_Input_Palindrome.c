/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void
palindrome (int input)
{
  int num, digit, rev = 0;
  num = input;
  while (num != 0)
    {
      digit = num % 10;
      rev = (rev * 10) + digit;
      num = num / 10;
    }
  printf ("\n %d in reverse is %d.", input, rev);
  if (input == rev)
    printf ("\n As a result, %d is a palindrome.", input);
  else
    printf ("\n As a result, %d is not a palindrome.", input);
}

int
main ()
{
  int number;
  printf ("\n Enter a number: ");
  scanf ("%d", &number);
  palindrome (number);
  return 0;
}

/******************************************************************************
Output:

 Enter a number: 1551

 1551 in reverse is 1551.
 As a result, 1551 is a palindrome.

*******************************************************************************/
