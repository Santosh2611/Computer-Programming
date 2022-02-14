/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int prime (int n);
int temp;

int
main ()
{

  int number, num;
  printf ("\n Input positive number: ");
  scanf ("%d", &number);
  temp = number / 2;
  num = prime (number);
  if (num == 1)
    printf ("\n %d is a prime number.", number);
  else
    printf ("\n %d is not a prime number.", number);
  return 0;
}

int
prime (int n)
{
  if (temp == 1)
    {
      return 1;
    }
  else if (n % temp == 0)
    {
      return 0;
    }
  else
    {
      temp = temp - 1;
      prime (n);
    }
}

/******************************************************************************

Output:

 Input positive number: 41

 41 is a prime number.

*******************************************************************************/

