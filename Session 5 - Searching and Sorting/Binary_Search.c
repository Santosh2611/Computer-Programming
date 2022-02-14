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
  int n, i, low, mid, high, target;
  printf ("\n Enter the size of the array: ");
  scanf ("%d", &n);
  int arr[n];
  printf
    ("\n Enter the elements of the array in sorted order one-by-one by giving space between them: ");
  for (i = 0; i <= n - 1; i++)
    scanf ("%d", &arr[i]);
  printf ("\n The array is: ");
  for (i = 0; i <= n - 1; i++)
    printf ("%d ", arr[i]);
  printf ("\n Enter the element to search: ");
  scanf ("%d", &target);
  low = 0;
  high = n - 1;
  while (low <= high)
    {
      mid = (low + high) / 2;
      if (arr[mid] < target)
	low = mid + 1;
      else if (arr[mid] > target)
	high = mid - 1;
      else if (arr[mid] = target)
	{
	  printf ("\n %d found at index location %d.", target, mid);
	  break;
	}
    }
  if (high < low)
    printf ("\n %d not found.", target);
  return 0;
}

/******************************************************************************
Output:

 Enter the size of the array: 5

 Enter the elements of the array in sorted order one-by-one by giving space between them: 1 2 3 4 5

 The array is: 1 2 3 4 5 
 Enter the element to search: 2

 2 found at index location 1.

*******************************************************************************/
