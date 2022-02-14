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
  int n, i, j, temp;
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
      for (j = 0; j <= (n - i - 2); j++)
	{
	  if (arr[j] > arr[j + 1])
	    {
	      temp = arr[j];
	      arr[j] = arr[j + 1];
	      arr[j + 1] = temp;
	    }
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

