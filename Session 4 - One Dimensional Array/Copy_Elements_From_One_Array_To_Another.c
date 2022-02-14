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
  int brr[n];
  printf ("\n Enter the array elements one-by-one: ");
  for (i = 0; i <= n - 1; i++)
    {
      scanf ("%d", &arr[i]);
      brr[i] = arr[i];
    }
  printf ("\n The array elements are as follows: ");
  for (i = 0; i <= n - 1; i++)
    printf ("%d ", arr[i]);
  printf ("\n The array elements in reverse order are as follows: ");
  for (i = n - 1; i >= 0; i--)
    printf ("%d ", brr[i]);
  return 0;
}

/******************************************************************************
Output:

 Enter the size of the array: 5

 Enter the array elements one-by-one: 1 2 3 4 5

 The array elements are as follows: 1 2 3 4 5 
 The array elements in reverse order are as follows: 5 4 3 2 1

*******************************************************************************/ 

