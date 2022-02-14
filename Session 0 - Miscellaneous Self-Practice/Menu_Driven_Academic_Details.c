/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int maximum (int deets[][10]);
int minimum_average (int deets[][10]);
int pass (int deets[][10]);
int m, n;

int
main ()
{
  int i, j, choice, details[100][10];
  scanf ("%d", &m);
  scanf ("%d", &n);
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	scanf ("%d", &details[i][j]);
    }
  scanf ("%d", &choice);
  printf ("Input:\n");
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
	  printf ("%d ", details[i][j]);
	  if (j == n - 1)
	    printf ("\n");
	}
    }
  printf ("Output:\n");
  if (choice == 1)
    maximum (details);
  else if (choice == 2)
    minimum_average (details);
  else if (choice == 3)
    pass (details);
  return 0;
}

int
maximum (int deets[][10])
{
  int i, max;
  max = 0;
  for (i = 0; i < m; i++)
    {
      if (deets[max][1] < deets[i][1])
	max = i;
    }
  printf ("%d", max + 1);
  return 0;
}

int
minimum_average (int deets[][10])
{
  int i, j, sum, avg, k = 0, temp[m], min;
  for (i = 0; i < m; i++)
    {
      j = 0, sum = 0;
      while (j < n)
	{
	  sum = sum + deets[i][j];
	  j++;
	}
      avg = sum / n;
      temp[k] = avg;
      k++;
    }
  for (i = 0; i < m; i++)
    {
      min = 0;
      if (temp[min] > temp[i])
	min = i;
    }
  printf ("%d", min + 1);
  return 0;
}

int
pass (int deets[][10])
{
  int i, j, count, temp;
  float percent[n], highest;
  for (j = 0; j < n; j++)
    {
      i = 0, count = 0;
      while (i < m)
	{
	  if (deets[i][j] >= 45)
	    count = count + 1;
	  i++;
	}
      percent[j] = 100 - ((count / m) * 100);
    }
  for (i = 0; i < n; i++)
    {
      highest = percent[0];
      temp = 0;
      if (percent[i] > percent[0])
	{
	  highest = percent[i];
	  temp = i;
	}
    }
  printf ("%d %f", temp + 1, highest);
  return 0;
}

/******************************************************************************

Output:
3

3

67

43

34

56

78

67

34

45

35

3

Input:

67 43 34 

56 78 67 

34 45 35 

Output:

1 100.000000

*******************************************************************************/

