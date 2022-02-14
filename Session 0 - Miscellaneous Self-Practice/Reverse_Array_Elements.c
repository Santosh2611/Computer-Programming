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
  int size, i, temp;
  printf ("\n Enter the size of the array: ");
  scanf ("%d", &size);
  int arr[size];
  printf ("\n Enter the elements of the array one-by-one: ");
  for (i = 0; i <= size - 1; i++)
    scanf ("%d", &arr[i]);
  printf ("\n The array elements are: ");
  for (i = 0; i <= size - 1; i++)
    printf ("%d ", arr[i]);
  for (i = 0; i < size / 2; i++)
    {
      temp = arr[i];
      arr[i] = arr[size - i - 1];
      arr[size - i - 1] = temp;
    }
  printf ("\n The array elements after reversing are: ");
  for (i = 0; i <= size - 1; i++)
    printf ("%d ", arr[i]);
  return 0;
}

/******************************************************************************
Output:

 Enter the size of the array: 6

 Enter the elements of the array one-by-one: 1 2 3 4 5 6

 The array elements are: 1 2 3 4 5 6 
 The array elements after reversing are: 6 5 4 3 2 1

*******************************************************************************/ 

