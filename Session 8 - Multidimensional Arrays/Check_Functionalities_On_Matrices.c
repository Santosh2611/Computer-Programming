/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void lower (int c[][10], int r, int col);
void upper (int c[][10], int r, int col);
void sparse (int c[][10], int r, int col);
void equal (int c[][10], int d[][10], int r, int col);
void identity (int c[][10], int r, int col);
int det (int c[][10], int r);
void get_cofactor (int e[][10], int x[][10], int p, int q, int size);

int
main ()
{
  int choice, row, column, a[10][10], b[10][10], i, j;
  do
    {
      printf
	("\n MENU:\n 1. Print lower triangular matrix\n 2. Print upper triangular matrix\n 3. Check for sparse matrix\n 4. Check whether two matrices are equal or not\n 5. Check for identity matrix\n 6. Find determinant of matrix\n 7. Continue\n 8. Exit");
      printf
	("\n\n Enter the number corresponding to the functionality you want to perform: ");
      scanf ("%d", &choice);

      if ((choice < 7) && ((choice == 1) || (choice == 2) || (choice == 5)))
	{
	  do
	    {
	      printf ("\n Enter the number of rows (<10): ");
	      scanf ("%d", &row);
	      printf (" Enter the number of columns (<10): ");
	      scanf ("%d", &column);
	      if (row != column)
		printf
		  ("\n Since the number of rows and columns are not equal, the matrix can be evaluated.\n Enter a valid input. \n");
	    }
	  while (row != column);
	  printf ("\n Enter elements of the matrix: \n");
	  for (i = 0; i < row; i++)
	    {
	      for (j = 0; j < column; j++)
		{
		  printf (" Enter a[%d][%d] element: ", i + 1, j + 1);
		  scanf ("%d", &a[i][j]);
		}
	    }
	  printf ("\n The matrix is: \n");
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
	    lower (a, row, column);
	  else if (choice == 2)
	    upper (a, row, column);
	  else if (choice == 5)
	    identity (a, row, column);
	}

      else if (choice == 3)
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
	  if (choice == 3)
	    sparse (a, row, column);
	}

      else if (choice == 4)
	{
	  printf ("\n Enter the number of rows (<10): ");
	  scanf ("%d", &row);
	  printf (" Enter the number of columns (<10): ");
	  scanf ("%d", &column);
	  if (row != column)
	    printf
	      ("\n Since the number of rows and columns are not equal, the matrix will also not be equal. \n");
	  else
	    {
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
	      equal (a, b, row, column);
	    }
	}

      else if (choice == 6)
	{
	  do
	    {
	      printf ("\n Enter the number of rows (<10): ");
	      scanf ("%d", &row);
	      printf (" Enter the number of columns (<10): ");
	      scanf ("%d", &column);
	      if (row != column)
		printf
		  ("\n Determinant can be evaluated only for a square matrix, where number of rows and columns should be equal.\n Enter a valid input. \n");
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
	  int temporary = det (a, row);
	  printf ("\n The determinant of the matrix is %d. \n", temporary);
	}

      printf
	("\n Enter 7 to continue the execution or any other key (8) to terminate the program: ");
      scanf ("%d", &choice);
    }
  while (choice == 7);
  return 0;
}

void
lower (int c[][10], int r, int col)
{
  int i, j;
  printf ("\n The lower triangular matrix is: \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  if (i < j)
	    printf (" 0 ");
	  else
	    printf (" %d ", c[i][j]);
	  if (j == col - 1)
	    printf ("\n");
	}
    }
}

void
upper (int c[][10], int r, int col)
{
  int i, j;
  printf ("\n The upper triangular matrix is: \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  if (i > j)
	    printf (" 0 ");
	  else
	    printf (" %d ", c[i][j]);
	  if (j == col - 1)
	    printf ("\n");
	}
    }
}

void
sparse (int c[][10], int r, int col)
{
  int i, j, size, count = 0;
  size = r * col;
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  if (c[i][j] == 0)
	    count++;
	}
    }
  if (count > (size / 2))
    printf ("\n This matrix is a sparse matrix. \n");
  else
    printf ("\n This matrix is not a sparse matrix. \n");
}

void
equal (int c[][10], int d[][10], int r, int col)
{
  int i, j, temp = 1;
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  while (c[i][j] != d[i][j])
	    {
	      temp = 0;
	      break;
	    }
	}
    }
  if (temp == 1)
    printf ("\n Both the matrices are equal. \n");
  else
    printf ("\n Both the matrices are not equal. \n");
}

void
identity (int c[][10], int r, int col)
{
  int i, j, temp = 1;
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < col; j++)
	{
	  while ((c[i][j] != 1) && (c[j][i] != 0))
	    {
	      temp = 0;
	      break;
	    }
	}
    }
  if (temp == 1)
    printf ("\n This matrix is an identity matrix. \n");
  else
    printf ("\n This matrix is not an identity matrix. \n");
}

// Recursive function for finding determinant of matrix.
// r is the current dimension of c[][]
int
det (int c[][10], int r)
{
  int d = 0;			//Initialize result
//Base case: if matrix contains single element
  if (r == 1)
    return c[0][0];
  int temp[r][r];		//To store cofactors
  int sign = 1;			//To store sign multiplier
//Iterate for each element of first row
  for (int first = 0; first < r; first++)
    {
//Getting cofactor of c[0][first]
      get_cofactor (c, temp, 0, first, r);
      d += sign * c[0][first] * det (temp, r - 1);
//Terms to be added with alternate sign
      sign = -sign;
    }
  return d;
}

// Function to get cofactor of e[r][r] in x[][]. size is current dimension of e[][]
void
get_cofactor (int e[][10], int x[][10], int p, int q, int size)
{
  int i = 0, j = 0;
//Looping for each element of the matrix
  for (int rw = 0; rw < size; rw++)
    {
      for (int cmn = 0; cmn < size; cmn++)
	{
	  // Copying into temporary matrix only those element which are not in given row and column
	  if ((rw != p) && (cmn != q))
	    {
	      x[i][j++] = e[rw][cmn];
	      // Rw is filled, so increase rw index and reset cmn index
	      if (j == size - 1)
		{
		  j = 0;
		  i++;
		}
	    }
	}
    }
}

/******************************************************************************

Output:

 MENU:
 1. Print lower triangular matrix
 2. Print upper triangular matrix
 3. Check for sparse matrix
 4. Check whether two matrices are equal or not
 5. Check for identity matrix
 6. Find determinant of matrix
 7. Continue
 8. Exit

 Enter the number corresponding to the functionality you want to perform: 1

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Since the number of rows and columns are not equal, the matrix can be evaluated.
 Enter a valid input. 

 Enter the number of rows (<10): 3
 Enter the number of columns (<10): 3

 Enter elements of the matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[1][3] element: 3
 Enter a[2][1] element: 4
 Enter a[2][2] element: 5
 Enter a[2][3] element: 6
 Enter a[3][1] element: 7
 Enter a[3][2] element: 8
 Enter a[3][3] element: 9

 The matrix is: 
 1  2  3 
 4  5  6 
 7  8  9 

 The lower triangular matrix is: 
 1  0  0 
 4  5  0 
 7  8  9 

 Enter 7 to continue the execution or any other key (8) to terminate the program: 7

 MENU:
 1. Print lower triangular matrix
 2. Print upper triangular matrix
 3. Check for sparse matrix
 4. Check whether two matrices are equal or not
 5. Check for identity matrix
 6. Find determinant of matrix
 7. Continue
 8. Exit

 Enter the number corresponding to the functionality you want to perform: 2

 Enter the number of rows (<10): 3
 Enter the number of columns (<10): 3

 Enter elements of the matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[1][3] element: 3
 Enter a[2][1] element: 4
 Enter a[2][2] element: 5
 Enter a[2][3] element: 6
 Enter a[3][1] element: 7
 Enter a[3][2] element: 8
 Enter a[3][3] element: 9

 The matrix is: 
 1  2  3 
 4  5  6 
 7  8  9 

 The upper triangular matrix is: 
 1  2  3 
 0  5  6 
 0  0  9 

 Enter 7 to continue the execution or any other key (8) to terminate the program: 7

 MENU:
 1. Print lower triangular matrix
 2. Print upper triangular matrix
 3. Check for sparse matrix
 4. Check whether two matrices are equal or not
 5. Check for identity matrix
 6. Find determinant of matrix
 7. Continue
 8. Exit

 Enter the number corresponding to the functionality you want to perform: 3

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Enter elements of matrix: 
 Enter a[1][1] element: 0
 Enter a[1][2] element: 1
 Enter a[1][3] element: 5
 Enter a[2][1] element: 0
 Enter a[2][2] element: 0
 Enter a[2][3] element: 0

 The input matrix is: 
 0  1  5 
 0  0  0 

 This matrix is a sparse matrix. 

 Enter 7 to continue the execution or any other key (8) to terminate the program: 7

 MENU:
 1. Print lower triangular matrix
 2. Print upper triangular matrix
 3. Check for sparse matrix
 4. Check whether two matrices are equal or not
 5. Check for identity matrix
 6. Find determinant of matrix
 7. Continue
 8. Exit

 Enter the number corresponding to the functionality you want to perform: 4

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 2

 Enter elements of first matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[2][1] element: 3
 Enter a[2][2] element: 4

 The first matrix is: 
 1  2 
 3  4 

 Enter elements of second matrix: 
 Enter b[1][1] element: 1
 Enter b[1][2] element: 2
 Enter b[2][1] element: 3
 Enter b[2][2] element: 4

 The second matrix is: 
 1  2 
 3  4 

 Both the matrices are equal. 

 Enter 7 to continue the execution or any other key (8) to terminate the program: 7

 MENU:
 1. Print lower triangular matrix
 2. Print upper triangular matrix
 3. Check for sparse matrix
 4. Check whether two matrices are equal or not
 5. Check for identity matrix
 6. Find determinant of matrix
 7. Continue
 8. Exit

 Enter the number corresponding to the functionality you want to perform: 5

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Since the number of rows and columns are not equal, the matrix can be evaluated.
 Enter a valid input. 

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 2

 Enter elements of the matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 0
 Enter a[2][1] element: 1 0
 Enter a[2][2] element: 1

 The matrix is: 
 1  0 
 0  1 

 This matrix is an identity matrix. 

 Enter 7 to continue the execution or any other key (8) to terminate the program: 7

 MENU:
 1. Print lower triangular matrix
 2. Print upper triangular matrix
 3. Check for sparse matrix
 4. Check whether two matrices are equal or not
 5. Check for identity matrix
 6. Find determinant of matrix
 7. Continue
 8. Exit

 Enter the number corresponding to the functionality you want to perform: 6

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 3

 Determinant can be evaluated only for a square matrix, where number of rows and columns should be equal.
 Enter a valid input. 

 Enter the number of rows (<10): 2
 Enter the number of columns (<10): 2

 Enter elements of matrix: 
 Enter a[1][1] element: 1
 Enter a[1][2] element: 2
 Enter a[2][1] element: 3
 Enter a[2][2] element: 4

 The input matrix is: 
 1  2 
 3  4 

 The determinant of the matrix is -2. 

 Enter 7 to continue the execution or any other key (8) to terminate the program: 8

*******************************************************************************/


