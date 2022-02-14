/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_array (int arr[], int count, int n);

int
main ()
{
  int size, array[25], i;
  printf ("\n Input the number of elements to be stored in the array: ");
  scanf ("%d", &size);
  printf ("\n Input %d elements in the array: \n", size);
  for (i = 0; i < size; i++)
    {
      printf (" Input Element %d: ", i + 1);
      scanf ("%d", &array[i]);
    }
  printf ("\n The %d array elements are:", size);
  print_array (array, 0, size);
  return 0;
}

void
print_array (int arr[], int count, int n)
{
  if (count < n)
    {
      printf ("\n Element %d: %d", count + 1, arr[count]);
      print_array (arr, count + 1, n);
    }
}

/******************************************************************************

Output:

 Input the number of elements to be stored in the array: 5

 Input 5 elements in the array: 
 Input Element 1: 9
 Input Element 2: 8
 Input Element 3: 7
 Input Element 4: 6
 Input Element 5: 5

 The 5 array elements are:
 Element 1: 9
 Element 2: 8
 Element 3: 7
 Element 4: 6
 Element 5: 5

*******************************************************************************/


