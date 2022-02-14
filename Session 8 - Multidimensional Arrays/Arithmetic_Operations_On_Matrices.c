/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void add (int c[][10], int d[][10], int r, int col);
void subtract (int c[][10], int d[][10], int r, int col);
void divide (int c[][10], int r, int col, int num);
void multiply (int c[][10], int d[][10], int r1, int c1, int r2, int c2);

int
main ()
{
  int choice, row, column, a[10][10], b[10][10], i, j, row1, column1, row2,
    column2, number;
  do
    {
      printf
	("\n MENU:\n 1. Add two matrices\n 2. Subtract two matrices\n 3. Multiply two matrices\n 4. Divide the elements of matrix with a number\n 5. Continue\n 6. Exit");
      printf
	("\n\n Enter the number corresponding to the functionality you want to perform: ");
      scanf ("%d", &choice);

      //Implementing if statement for all those functionalities which have one-to-one element arithmetic operation 
      if (choice == 1 || choice == 2)
	{
	  printf ("\n Enter the number of rows (<10): ");
	  scanf ("%d", &row);
	  printf (" Enter the number of columns (<10): ");
	  scanf ("%d", &column);
	  printf ("\n Enter elements of first matrix: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" Enter a[%d][%d] element: ", i + 1, j + 1);
		  scanf ("%d", &a[i][j]);
		}
	    }
	  printf ("\n The first matrix is: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" %d ", a[i][j]);
		  if (j == column - 1)
		    printf ("\n");
		}
	    }
	  printf ("\n Enter elements of second matrix: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" Enter b[%d][%d] element: ", i + 1, j + 1);
		  scanf ("%d", &b[i][j]);
		}
	    }
	  printf ("\n The second matrix is: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" %d ", b[i][j]);
		  if (j == column - 1)
		    printf ("\n");
		}
	    }
	  if (choice == 1)
	    add (a, b, row, column);
	  else if (choice == 2)
	    subtract (a, b, row, column);
	}

      //Else if statement for multiplication of two matrices
      else if (choice == 3)
	{
	  do
	    {
	      printf ("\n Enter the number of rows for first matrix (<10): ");
	      scanf ("%d", &row1);
	      printf
		(" Enter the number of columns for first matrix (<10): ");
	      scanf ("%d", &column1);
	      printf
		("\n Enter the number of rows for second matrix (<10): ");
	      scanf ("%d", &row2);
	      printf
		(" Enter the number of columns for second matrix (<10): ");
	      scanf ("%d", &column2);
	      if (column1 != row2)
		{
		  printf
		    (" For matrix multiplication, the number of column of first matrix should be equal to number of rows of second matrix.");
		  printf ("\n Enter a valid input in the next attempt. \n");
		}
	    }
	  while (column1 != row2);

	  printf ("\n Enter elements of first matrix: \n");
	  for (i = 0; i < row1; i++)
	    {
	      for (j = 0; j < column1; j++)
		{
		  printf (" Enter a[%d][%d] element: ", i + 1, j + 1);
		  scanf ("%d", &a[i][j]);
		}
	    }
	  printf ("\n The first matrix is: \n");
	  for (i = 0; i < row1; i++)
	    {
	      for (j = 0; j < column1; j++)
		{
		  printf (" %d ", a[i][j]);
		  if (j == column1 - 1)
		    printf ("\n");
		}
	    }
	  printf ("\n Enter elements of second matrix: \n");
	  for (i = 0; i < row2; i++)
	    {
	      for (j = 0; j < column2; j++)
		{
		  printf (" Enter b[%d][%d] element: ", i + 1, j + 1);
		  scanf ("%d", &b[i][j]);
		}
	    }
	  printf ("\n The second matrix is: \n");
	  for (i = 0; i < row2; i++)
	    {
	      for (j = 0; j < column2; j++)
		{
		  printf (" %d ", b[i][j]);
		  if (j == column2 - 1)
		    printf ("\n");
		}
	    }
	  multiply (a, b, row1, column1, row2, column2);
	}

      //Else if statement for divide the elements of a matrix with a number
      else if (choice == 4)
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
	  printf
	    ("\n Enter the number which the elements of the matrix has to be divided: ");
	  scanf ("%d", &number);
	  divide (a, row, column, number);
	}

      printf
	("\n Enter 5 to continue the execution or any other key (6) to terminate the program: ");
      scanf ("%d", &choice);
    }
  while (choice == 5);
  return 0;
}

//User defined function to add two matrices and display the resultant matrix
void
add (int c[][10], int d[][10], int r, int col)
{
  int i, j, sum[10][10];
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	sum[i][j] = c[i][j] + d[i][j];
    }
  printf ("\n The sum of the two matrices is: \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  printf (" %d ", sum[i][j]);
	  if (j == col - 1)
	    printf ("\n");
	}
    }
}

//User defined function to subtract two matrices and display the resultant matrix
void
subtract (int c[][10], int d[][10], int r, int col)
{
  int i, j, difference[10][10];
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	difference[i][j] = c[i][j] - d[i][j];
    }
  printf ("\n The difference of the two matrices is: \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  printf (" %d ", difference[i][j]);
	  if (j == col - 1)
	    printf ("\n");
	}
    }
}

//User defined function to multiply two matrices and display the resultant matrix
void
multiply (int c[][10], int d[][10], int r1, int c1, int r2, int c2)
{
  int i, j, k, product[10][10];
  for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
	product[i][j] = 0;	//Initialize all elements of resultant matrix as zero
    }
  for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
	{
	  for (k = 0; k < c1; k++)
	    product[i][j] += c[i][k] * d[k][j];
	}
    }
  printf ("\n The product of the two matrices is: \n");
  for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
	{
	  printf (" %d ", product[i][j]);
	  if (j == c2 - 1)
	    printf ("\n");
	}
    }
}

//User defined function to divide two matrices and display the resultant matrix
void
divide (int c[][10], int r, int col, int num)
{
  int i, j, quo[10][10];
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	quo[i][j] = c[i][j] / num;
    }
  printf ("\n The resultant matrix is (decimal exempted): \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  printf (" %d ", quo[i][j]);
	  if (j == col - 1)
	    printf ("\n");
	}
    }
}

/******************************************************************************

Output:

 MENU:
 1. Add two matrices
 2. Subtract two matrices
 3. Multiply two matrices
 4. Divide the elements of matrix with a number
 5. Continue
 6. Exit

 Enter the number corresponding to the functionality you want to perform: 1

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Enter elements of first matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[1][3] element: 3
 Enter a[2][1] element: 4
 Enter a[2][2] element: 5
 Enter a[2][3] element: 6

 The first matrix is: 
 1  2  3 
 4  5  6 

 Enter elements of second matrix: 
 Enter b[1][1] element: 9
 Enter b[1][2] element: 8
 Enter b[1][3] element: 7
 Enter b[2][1] element: 6
 Enter b[2][2] element: 5
 Enter b[2][3] element: 4

 The second matrix is: 
 9  8  7 
 6  5  4 

 The sum of the two matrices is: 
 10  10  10 
 10  10  10 

 Enter 5 to continue the execution or any other key (6) to terminate the program: 5

 MENU:
 1. Add two matrices
 2. Subtract two matrices
 3. Multiply two matrices
 4. Divide the elements of matrix with a number
 5. Continue
 6. Exit

 Enter the number corresponding to the functionality you want to perform: 2

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Enter elements of first matrix: 
 Enter a[1][1] element: 5
 Enter a[1][2] element: 9
 Enter a[1][3] element: 8
 Enter a[2][1] element: 4
 Enter a[2][2] element: 6
 Enter a[2][3] element: 2

 The first matrix is: 
 5  9  8 
 4  6  2 

 Enter elements of second matrix: 
 Enter b[1][1] element: 0
 Enter b[1][2] element: 1
 Enter b[1][3] element: 4
 Enter b[2][1] element: 5
 Enter b[2][2] element: 9
 Enter b[2][3] element: 2

 The second matrix is: 
 0  1  4 
 5  9  2 

 The difference of the two matrices is: 
 5  8  4 
 -1  -3  0 

 Enter 5 to continue the execution or any other key (6) to terminate the program: 5

 MENU:
 1. Add two matrices
 2. Subtract two matrices
 3. Multiply two matrices
 4. Divide the elements of matrix with a number
 5. Continue
 6. Exit

 Enter the number corresponding to the functionality you want to perform: 3

 Enter the number of rows for first matrix (<10): 2
 Enter the number of columns for first matrix (<10): 3

 Enter the number of rows for second matrix (<10): 5
 Enter the number of columns for second matrix (<10): 7
 For matrix multiplication, the number of column of first matrix should be equal to number of rows of second matrix.
 Enter a valid input in the next attempt. 

 Enter the number of rows for first matrix (<10): 2
 Enter the number of columns for first matrix (<10): 3

 Enter the number of rows for second matrix (<10): 3
 Enter the number of columns for second matrix (<10): 2

 Enter elements of first matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[1][3] element: 3
 Enter a[2][1] element: 4
 Enter a[2][2] element: 5
 Enter a[2][3] element: 6

 The first matrix is: 
 1  2  3 
 4  5  6 

 Enter elements of second matrix: 
 Enter b[1][1] element: 9
 Enter b[1][2] element: 8
 Enter b[2][1] element: 7
 Enter b[2][2] element: 6
 Enter b[3][1] element: 5
 Enter b[3][2] element: 4

 The second matrix is: 
 9  8 
 7  6 
 5  4 

 The product of the two matrices is: 
 38  32 
 101  86 

 Enter 5 to continue the execution or any other key (6) to terminate the program: 5

 MENU:
 1. Add two matrices
 2. Subtract two matrices
 3. Multiply two matrices
 4. Divide the elements of matrix with a number
 5. Continue
 6. Exit

 Enter the number corresponding to the functionality you want to perform: 4

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 2

 Enter elements of matrix: 
 Enter a[1][1] element: 3
 Enter a[1][2] element: 5
 Enter a[2][1] element: 6
 Enter a[2][2] element: 8

 The input matrix is: 
 3  5 
 6  8 

 Enter the number which the elements of the matrix has to be divided: 2

 The resultant matrix is (decimal exempted): 
 1  2 
 3  4 

 Enter 5 to continue the execution or any other key (6) to terminate the program: 6

*******************************************************************************/
