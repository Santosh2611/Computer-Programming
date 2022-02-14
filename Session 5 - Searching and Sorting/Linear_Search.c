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
  int n, i, check, element;
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
  printf ("\n Enter the element to search: ");
  scanf ("%d", &element);
  check = 0;
  for (i = 0; i <= n - 1; i++)
    {
      if (arr[i] == element)
	{
	  check = 1;
	  printf ("\n %d is found at index position %d.", element, i);
	}
    }
  if (check == 0)
    printf ("\n %d is not found in the entered array.", element);
  return 0;
}

/******************************************************************************
Output:

 Enter the size of the array: 5

 Enter the elements of the array one-by-one by giving space between them: 9 2 5 3 7

 The array is: 9 2 5 3 7 
 Enter the element to search: 7

 7 is found at index position 4.

*******************************************************************************/