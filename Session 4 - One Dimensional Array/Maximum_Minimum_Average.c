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
  int n, i, choice, min, max;
  float sum = 0, avg;
  printf ("\n Enter the size of the array: ");
  scanf ("%d", &n);
  int arr[n];
  printf ("\n Enter the elements of the array one-by-one: ");
  for (i = 0; i <= n - 1; i++)
    scanf ("%d", &arr[i]);
  printf ("\n The array elements are as follows: ");
  for (i = 0; i <= n - 1; i++)
    printf ("%d ", arr[i]);
  do
    {
      printf
	("\n MENU:\n 1. Minimum of the array\n 2. Maximum of the array\n 3. Average of the array elements\n 4. Continue\n 5. Exit\n Enter the number corresponding the operation you wanna to perform: ");
      scanf ("%d", &choice);
      if (choice == 1)
	{
	  min = arr[0];
	  for (i = 1; i <= n - 1; i++)
	    {
	      if (arr[i] < min)
		min = arr[i];
	    }
	  printf ("\n The minimum element of the array is %d.", min);
	}
      if (choice == 2)
	{
	  max = arr[0];
	  for (i = 1; i <= n - 1; i++)
	    {
	      if (arr[i] > max)
		max = arr[i];
	    }
	  printf ("\n The maximum element of the array is %d.", max);
	}
      if (choice == 3)
	{
	  for (i = 0; i <= n - 1; i++)
	    sum = sum + arr[i];
	  avg = sum / n;
	  printf ("\n The average of all the element(s) of the array is %f.",
		  avg);
	}
      printf
	("\n To test for another input, enter 4 to continue or any other number (5) to terminate the program: ");
      scanf ("%d", &choice);
    }
  while (choice == 4);
  return 0;
}

/******************************************************************************
Output:

 Enter the size of the array: 5

 Enter the elements of the array one-by-one: 1 5 9 7 3

 The array elements are as follows: 1 5 9 7 3 
 MENU:
 1. Minimum of the array
 2. Maximum of the array
 3. Average of the array elements
 4. Continue
 5. Exit
 Enter the number corresponding the operation you wanna to perform: 1

 The minimum element of the array is 1.
 To test for another input, enter 4 to continue or any other number (5) to terminate the program: 4

 MENU:
 1. Minimum of the array
 2. Maximum of the array
 3. Average of the array elements
 4. Continue
 5. Exit
 Enter the number corresponding the operation you wanna to perform: 2

 The maximum element of the array is 9.
 To test for another input, enter 4 to continue or any other number (5) to terminate the program: 4

 MENU:
 1. Minimum of the array
 2. Maximum of the array
 3. Average of the array elements
 4. Continue
 5. Exit
 Enter the number corresponding the operation you wanna to perform: 3

 The average of all the element(s) of the array is 5.000000.
 To test for another input, enter 4 to continue or any other number (5) to terminate the program: 5

*******************************************************************************/



