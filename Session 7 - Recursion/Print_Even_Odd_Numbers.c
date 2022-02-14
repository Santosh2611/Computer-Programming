/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void EvenOdd (int temp, int range);

int
main ()
{
  int n;
  printf ("\n Input the value of range (n>1): ");
  scanf ("%d", &n);
  printf ("\n All odd numbers from 1 to %d are: ", n);
  EvenOdd (1, n);
  printf ("\n All even numbers from 1 to %d are: ", n);
  EvenOdd (2, n);
  return 0;
}

void
EvenOdd (int temp, int range)
{
  if (temp > range)
    return;
  else
    {
      printf ("%d  ", temp);
      EvenOdd (temp + 2, range);
    }
}

/******************************************************************************

Output:

 Input the value of range (n>1): 7

 All odd numbers from 1 to 7 are: 1  3  5  7  
 All even numbers from 1 to 7 are: 2  4  6

*******************************************************************************/


