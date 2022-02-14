/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int m, n;			//Size of matrix

//Function to find minimum mark of student r
int
minimum_mark (int marks[100][10], int r)
{
  int i, j, min, count = 0, temp, copy[10];

  //Copy row elements to copy array
  for (j = 0; j < n; j++)
    copy[j] = marks[r][j];

  //Bubble Sort Marks Array
  for (i = 0; i <= (n - 2); i++)
    {
      for (j = 0; j <= (n - i - 2); j++)
	{
	  if (copy[j] > copy[j + 1])
	    {
	      temp = copy[j];
	      copy[j] = copy[j + 1];
	      copy[j + 1] = temp;
	    }
	}
    }

  //Count the number of elements with value=-1
  for (i = 0; i < n; i++)
    {
      if (copy[i] == -1)
	count++;
    }

  min = copy[count];

  return min;
}

//Function to print list of students who wrote more than t exams
int
print_students (int marks[100][10], int t)
{
  int i, j, k = 0, count = 0, list[100], temp;

  //Students who wrote more than t exams
  for (i = 0; i < m; i++)
    {
      j = 0;
      while (j < n)
	{
	  if (marks[i][j] == -1)
	    count++;
	  j++;
	}
      if (count > t)
	{
	  list[k] = i + 1;
	  k++;
	}
    }

  //Sorting the list array
  for (i = 0; i <= (k - 2); i++)
    {
      for (j = 0; j <= (k - i - 2); j++)
	{
	  if (list[j] > list[j + 1])
	    {
	      temp = list[j];
	      list[j] = list[j + 1];
	      list[j + 1] = temp;
	    }
	}
    }

  //Print sorted array
  for (i = 0; i < k; i++)
    printf ("%d ", list[i] - 1);
  return 0;
}

//Main function
int
main ()
{
  int marksheet[100][10];
  int new_marksheet[100][10];
  int i, j, t;

  scanf ("%d", &m);
  scanf ("%d", &n);

  //read marksheet here
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	scanf ("%d", &marksheet[i][j]);
    }

  scanf ("%d", &t);
  print_students (marksheet, t);
  printf ("\n");

  //Calculate the new marksheet and print it here
  int temp, count, k, l;

  //Copy marksheet array to new_marksheet array
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	new_marksheet[i][j] = marksheet[i][j];
    }

  //Calculate new marksheet based on given conditions
  for (i = 0; i < m; i++)
    {
      temp = minimum_mark (new_marksheet, i);
      j = 0, count = 0;
      while (j < n)
	{
	  if (new_marksheet[i][j] == -1)
	    count++;
	  j++;
	}
      if (count == n)
	{
	  k = 0;
	  while (k < n)
	    {
	      if (new_marksheet[i][k] == -1)
		new_marksheet[i][k] = 0;
	      k++;
	    }
	}
      else
	{
	  l = 0;
	  while (l < n)
	    {
	      if (new_marksheet[i][l] == -1)
		new_marksheet[i][l] = temp;
	      l++;
	    }
	}
    }

  //Print new_marksheet array
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
	  printf ("%d ", new_marksheet[i][j]);
	  if (j == n - 1)
	    printf ("\n");
	}
    }

  return 0;
}

/******************************************************************************

Output:
3 4

-1 -1 4 8 3 -1 7 2 -1 -1 -1 -1

2

1 2 

4 4 4 8 

3 2 7 2 

0 0 0 0

*******************************************************************************/