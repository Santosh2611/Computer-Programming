/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int palindrome (int num, int rev);

int
main ()
{
  int number, temp;
  printf ("\n Input a number: ");
  scanf ("%d", &number);
  temp = palindrome (number, 0);
  printf ("\n The reverse of %d is %d.", number, temp);
  if (temp == number)
    printf ("\n Therefore, %d is a palindrome.", number);
  else
    printf ("\n Therefore, %d is not a palindrome.", number);
  return 0;
}

int
palindrome (int num, int rev)
{
  if (num == 0)
    return rev;
  else
    {
      rev = (rev * 10) + (num % 10);
      return palindrome (num / 10, rev);
    }
}

/******************************************************************************

Output:

 Input a number: 15551

 The reverse of 15551 is 15551.
 Therefore, 15551 is a palindrome.

*******************************************************************************/
