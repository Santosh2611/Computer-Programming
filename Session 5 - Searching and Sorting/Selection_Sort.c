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
  int n, i, j, temp, smallest;
  printf ("\n Enter the size of the array: ");
  scanf ("%d", &n);
  int arr[n];
  printf
    ("\n Enter the elements of the array one-by-one by giving space between them: ");
  for (i = 0; i <= n - 1; i++)
    scanf ("%d", &arr[i]);
  printf ("\n The array is: ");
  for (i = 0; i <= n - 1; i++)
    printf ("%d ", arr[i]);
  for (i = 0; i <= (n - 2); i++)
    {
      smallest = i;
      for (j = (i + 1); j <= (n - 1); j++)
	{
	  if (arr[smallest] > arr[j])
	    smallest = j;
	}
      if (smallest != i)
	{
	  temp = arr[i];
	  arr[i] = arr[smallest];
	  arr[smallest] = temp;
	}
    }
  printf ("\n The sorted array is: ");
  for (i = 0; i <= n - 1; i++)
    printf ("%d ", arr[i]);
  return 0;
}

/******************************************************************************
Output:

 Enter the size of the array: 5

 Enter the elements of the array one-by-one by giving space between them: 9 2 5 3 7

 The array is: 9 2 5 3 7 
 The sorted array is: 2 3 5 7 9

*******************************************************************************/