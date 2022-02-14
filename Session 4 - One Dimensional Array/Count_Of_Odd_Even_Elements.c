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
  int n, i;
  printf ("\n Enter the size of the array: ");
  scanf ("%d", &n);
  int arr[n];
  printf ("\n Enter the array elements one-by-one: ");
  for (i = 0; i <= n - 1; i++)
    scanf ("%d", &arr[i]);
  printf ("\n The array elements are as follows: ");
  for (i = 0; i <= n - 1; i++)
    printf ("%d ", arr[i]);
  printf ("\n Count of odd numbers: ");
  for (i = 0; i <= n - 1; i++)
    {
      if (arr[i] % 2 == 1)
	printf ("%d ", arr[i]);
    }
  printf ("\n Count of even numbers: ");
  for (i = 0; i <= n - 1; i++)
    {
      if (arr[i] % 2 == 0)
	printf ("%d ", arr[i]);
    }
  return 0;
}

/******************************************************************************
Output:

 Enter the size of the array: 5

 Enter the array elements one-by-one: 1 2 3 4 5

 The array elements are as follows: 1 2 3 4 5 
 Count of odd numbers: 1 3 5 
 Count of even numbers: 2 4

*******************************************************************************/ 

