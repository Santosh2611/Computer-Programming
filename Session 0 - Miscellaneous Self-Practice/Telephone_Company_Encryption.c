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
  int number, i, choice, arr[4], temp, swap1, swap2, swap3, swap4;
  do
    {
      printf
	("\n MENU:\n 1. Original code to encrypted code\n 2. Encrypted code to original code\n 3. Continue\n 4. Exit");
      printf
	("\n Enter the number corresponding to the operation you want to perform: ");
      scanf ("%d", &choice);
      if (choice == 1)
	{
	  printf
	    ("\n Enter the original code by giving space between each number: ");
	  for (i = 0; i <= 3; i++)
	    scanf ("%d", &arr[i]);
	  for (i = 0; i <= 3; i++)
	    arr[i] = (arr[i] + 7) % 10;
	  //Swapping first digit with third
	  swap1 = arr[0];
	  arr[0] = arr[2];
	  arr[2] = swap1;
	  //Swapping second digit with fourth
	  swap2 = arr[1];
	  arr[1] = arr[3];
	  arr[3] = swap2;
	  printf ("\n The encrypted code is: ");
	  for (i = 0; i <= 3; i++)
	    printf ("%d ", arr[i]);
	}
      if (choice == 2)
	{
	  printf
	    ("\n Enter the encrypted code by giving space between each number: ");
	  for (i = 0; i <= 3; i++)
	    scanf ("%d", &arr[i]);
	  //Swapping first digit with third
	  swap3 = arr[0];
	  arr[0] = arr[2];
	  arr[2] = swap3;
	  //Swapping second digit with fourth
	  swap4 = arr[1];
	  arr[1] = arr[3];
	  arr[3] = swap4;
	  for (i = 0; i <= 3; i++)
	    {
	      if (arr[i] < 7)
		{
		  temp = 7 - arr[i];
		  arr[i] = 10 - temp;
		}
	      else
		arr[i] = (arr[i] - 7) % 10;
	    }
	  printf ("\n The original code is: ");
	  for (i = 0; i <= 3; i++)
	    printf ("%d ", arr[i]);
	}
      printf
	("\n To continue, press 3 or any other number (4) to terminate the program: ");
      scanf ("%d", &choice);
    }
  while (choice == 3);
  return 0;
}

/******************************************************************************
Output:

 MENU:
 1. Original code to encrypted code
 2. Encrypted code to original code
 3. Continue
 4. Exit
 Enter the number corresponding to the operation you want to perform: 1

 Enter the original code by giving space between each number: 1 2 3 4

 The encrypted code is: 0 1 8 9 
 To continue, press 3 or any other number (4) to terminate the program: 3

 MENU:
 1. Original code to encrypted code
 2. Encrypted code to original code
 3. Continue
 4. Exit
 Enter the number corresponding to the operation you want to perform: 2

 Enter the encrypted code by giving space between each number: 0 1 8 9

 The original code is: 1 2 3 4 
 To continue, press 3 or any other number (4) to terminate the program: 4

*******************************************************************************/


