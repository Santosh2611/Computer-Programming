/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void transpose (int b[][10], int r, int col);
void sum_of_right_diagonal (int b[][10], int r, int col);
void sum_of_left_diagonal (int b[][10], int r, int col);
void row_sum (int b[][10], int r, int col);
void column_sum (int b[][10], int r, int col);

int
main ()
{
  int choice, row, column, a[10][10], i, j;
  do
    {
      printf
	("\n MENU:\n 1. Transpose of a matrix\n 2. Sum of right diagonals of square matrix\n 3. Sum of left diagonals of square matrix\n 4. Sum of numbers in the row\n 5. Sum of numbers in the column\n 6. Continue\n 7. Exit");
      printf
	("\n\n Enter the number corresponding to the functionality you want to perform: ");
      scanf ("%d", &choice);

      //In choice 2 and 3, there is a requirement if the input is a square matrix or not
      if ((choice < 6) && (choice != 2) && (choice != 3))
	{
	  printf ("\n Enter the number of rows (<10): ");
	  scanf ("%d", &row);
	  printf (" Enter the number of columns (<10): ");
	  scanf ("%d", &column);
	  printf ("\n Enter elements of matrix: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" Enter a[%d][%d] element: ", i + 1, j + 1);
		  scanf ("%d", &a[i][j]);
		}
	    }
	  printf ("\n The input matrix is: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" %d ", a[i][j]);
		  if (j == column - 1)
		    printf ("\n");
		}
	    }
	  if (choice == 1)
	    transpose (a, row, column);
	  else if (choice == 4)
	    row_sum (a, row, column);
	  else if (choice == 5)
	    column_sum (a, row, column);
	}

      else if ((choice == 2) || (choice == 3))
	{
	  do
	    {
	      printf ("\n Enter the number of rows (<10): ");
	      scanf ("%d", &row);
	      printf (" Enter the number of columns (<10): ");
	      scanf ("%d", &column);
	      if (row != column)
		printf
		  ("\n For a square matrix, number of rows and columns should be equal.\n Enter a valid input. \n");
	    }
	  while (row != column);
	  printf ("\n Enter elements of matrix: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" Enter a[%d][%d] element: ", i + 1, j + 1);
		  scanf ("%d", &a[i][j]);
		}
	    }
	  printf ("\n The input matrix is: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" %d ", a[i][j]);
		  if (j == column - 1)
		    printf ("\n");
		}
	    }
	  if (choice == 2)
	    sum_of_right_diagonal (a, row, column);
	  else if (choice == 3)
	    sum_of_left_diagonal (a, row, column);
	}
      printf
	("\n Enter 6 to continue the execution or any other key (7) to terminate the program: ");
      scanf ("%d", &choice);
    }
  while (choice == 6);
  return 0;
}

void
transpose (int b[][10], int r, int col)
{
  int i, j, t[10][10];
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	t[j][i] = b[i][j];
    }
  printf ("\n The transpose of the matrix is: \n");
  for (i = 0; i < col; i++)
    {
      for (j = 0; j < r; j++)
	{
	  printf (" %d ", t[i][j]);
	  if (j == r - 1)
	    printf ("\n");
	}
    }
}

void
sum_of_right_diagonal (int b[][10], int r, int col)
{
  int i, j, sum = 0;
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  if ((i + j) == (r - 1))
	    sum = sum + b[i][j];
	}
    }
  printf ("\n The sum of right diagonal elements of the matrix is %d. \n",
	  sum);
}

void
sum_of_left_diagonal (int b[][10], int r, int col)
{
  int i, j, sum = 0;
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  if (i == j)
	    sum = sum + b[i][j];
	}
    }
  printf ("\n The sum of left diagonal elements of the matrix is %d. \n",
	  sum);
}

void
row_sum (int b[][10], int r, int col)
{
  int i, j, sum;
  printf ("\n");
  for (i = 0; i < r; i++)
    {
      sum = 0;
      for (j = 0; j < col; j++)
	sum = sum + b[i][j];
      printf (" The sum of elements in row %d is %d. \n", (i + 1), sum);
    }
}

void
column_sum (int b[][10], int r, int col)
{
  int i, j, sum;
  printf ("\n");
  for (i = 0; i < col; i++)
    {
      sum = 0;
      for (j = 0; j < r; j++)
	sum = sum + b[j][i];
      printf (" The sum of elements in column %d is %d. \n", (i + 1), sum);
    }
}

/******************************************************************************

Output:

 MENU:
 1. Transpose of a matrix
 2. Sum of right diagonals of square matrix
 3. Sum of left diagonals of square matrix
 4. Sum of numbers in the row
 5. Sum of numbers in the column
 6. Continue
 7. Exit

 Enter the number corresponding to the functionality you want to perform: 1

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Enter elements of matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[1][3] element: 3
 Enter a[2][1] element: 4
 Enter a[2][2] element: 5
 Enter a[2][3] element: 6

 The input matrix is: 
 1  2  3 
 4  5  6 

 The transpose of the matrix is: 
 1  4 
 2  5 
 3  6 

 Enter 6 to continue the execution or any other key (7) to terminate the program: 6

 MENU:
 1. Transpose of a matrix
 2. Sum of right diagonals of square matrix
 3. Sum of left diagonals of square matrix
 4. Sum of numbers in the row
 5. Sum of numbers in the column
 6. Continue
 7. Exit

 Enter the number corresponding to the functionality you want to perform: 2

 Enter the number of rows (<10): 3
 Enter the number of columns (<10): 2

 For a square matrix, number of rows and columns should be equal.
 Enter a valid input. 

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 2

 Enter elements of matrix: 
 Enter a[1][1] element: 9
 Enter a[1][2] element: 1
 Enter a[2][1] element: 5
 Enter a[2][2] element: 3

 The input matrix is: 
 9  1 
 5  3 

 The sum of right diagonal elements of the matrix is 6. 

 Enter 6 to continue the execution or any other key (7) to terminate the program: 6

 MENU:
 1. Transpose of a matrix
 2. Sum of right diagonals of square matrix
 3. Sum of left diagonals of square matrix
 4. Sum of numbers in the row
 5. Sum of numbers in the column
 6. Continue
 7. Exit

 Enter the number corresponding to the functionality you want to perform: 3

 Enter the number of rows (<10): 9 2
 Enter the number of columns (<10): 2

 Enter elements of matrix: 
 Enter a[1][1] element: 9
 Enter a[1][2] element: 1
 Enter a[2][1] element: 5
 Enter a[2][2] element: 3

 The input matrix is: 
 9  1 
 5  3 

 The sum of left diagonal elements of the matrix is 12. 

 Enter 6 to continue the execution or any other key (7) to terminate the program: 6

 MENU:
 1. Transpose of a matrix
 2. Sum of right diagonals of square matrix
 3. Sum of left diagonals of square matrix
 4. Sum of numbers in the row
 5. Sum of numbers in the column
 6. Continue
 7. Exit

 Enter the number corresponding to the functionality you want to perform: 4

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 5

 Enter elements of matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[1][3] element: 3
 Enter a[1][4] element: 4
 Enter a[1][5] element: 5
 Enter a[2][1] element: 6
 Enter a[2][2] element: 7
 Enter a[2][3] element: 9
 Enter a[2][4] element: 8
 Enter a[2][5] element: 1

 The input matrix is: 
 1  2  3  4  5 
 6  7  9  8  1 

 The sum of elements in row 1 is 15. 
 The sum of elements in row 2 is 31. 

 Enter 6 to continue the execution or any other key (7) to terminate the program: 6

 MENU:
 1. Transpose of a matrix
 2. Sum of right diagonals of square matrix
 3. Sum of left diagonals of square matrix
 4. Sum of numbers in the row
 5. Sum of numbers in the column
 6. Continue
 7. Exit

 Enter the number corresponding to the functionality you want to perform: 5

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Enter elements of matrix: 
 Enter a[1][1] element: 5
 Enter a[1][2] element: 1
 Enter a[1][3] element: 4
 Enter a[2][1] element: 9
 Enter a[2][2] element: 3
 Enter a[2][3] element: 2

 The input matrix is: 
 5  1  4 
 9  3  2 

 The sum of elements in column 1 is 14. 
 The sum of elements in column 2 is 4. 
 The sum of elements in column 3 is 6. 

 Enter 6 to continue the execution or any other key (7) to terminate the program: 7

*******************************************************************************/