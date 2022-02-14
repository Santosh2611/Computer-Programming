/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int
main ()
{
  int num, count = 0, num1, i, temp;
  printf ("\n Enter a number: ");
  scanf ("%d", &num);
  num1 = num;
  while (num1 != 0)
    {
      num1 = num1 / 10;
      count = count + 1;
    }
  i = count - 1;
  while (i > 0)
    {
      temp = num / (pow (10, i));
      num = num - temp * (pow (10, i));
      i = i - 1;
    }
  printf ("\n Output using while loop: %d", num);
  printf
    ("\n ----------------------------------------------------------------");
  count = 0;
  printf ("\n Enter a number: ");
  scanf ("%d", &num);
  for (num1 = num; num1 != 0;)
    {
      num1 = num1 / 10;
      count = count + 1;
    }
  for (i = count - 1; i > 0; i--)
    {
      temp = num / (pow (10, i));
      num = num - temp * (pow (10, i));
    }
  printf ("\n Output using for loop: %d", num);
  printf
    ("\n ----------------------------------------------------------------");
  count = 0;
  printf ("\n Enter a number: ");
  scanf ("%d", &num);
  num1 = num;
  do
    {
      num1 = num1 / 10;
      count = count + 1;
    }
  while (num1 != 0);
  i = count - 1;
  do
    {
      temp = num / (pow (10, i));
      num = num - temp * (pow (10, i));
      i = i - 1;
    }
  while (i > 0);
  printf ("\n Output using do while loop: %d", num);
  return 0;
}

/******************************************************************************
Output:

 Enter a number: 56

 Output using while loop: 6
 ----------------------------------------------------------------
 Enter a number: 56

 Output using for loop: 6
 ----------------------------------------------------------------
 Enter a number: 56

 Output using do while loop: 6

*******************************************************************************/
