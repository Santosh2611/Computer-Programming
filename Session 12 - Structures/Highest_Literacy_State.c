/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct country
{
  char name[50];
  double population;
  float literacy_rate[5];
  float avg_literacy;
} c1, c2;

int
main ()
{
  int i, sum = 0;
  printf ("\n Enter data for first country as follows:-");
  printf ("\n Enter name: ");
  scanf ("%s", c1.name);
  printf (" Enter population: ");
  scanf ("%lf", &c1.population);
  printf (" Enter literacy rate of 5 states: ");
  for (i = 0; i < 5; i++)
    {
      scanf ("%f", &c1.literacy_rate[i]);
      sum = sum + c1.literacy_rate[i];
    }
  c1.avg_literacy = sum / 5;
  sum = 0;

  printf ("\n Enter data for second country as follows:-");
  printf ("\n Enter name: ");
  scanf ("%s", c2.name);
  printf (" Enter population: ");
  scanf ("%lf", &c2.population);
  printf (" Enter literacy rate of 5 states: ");
  for (i = 0; i < 5; i++)
    {
      scanf ("%f", &c2.literacy_rate[i]);
      sum = sum + c2.literacy_rate[i];
    }
  c2.avg_literacy = sum / 5;

  if (c1.avg_literacy > c2.avg_literacy)
    printf
      ("\n The first country has a higher literacy rate than second country by %.2f Percent.",
       c1.avg_literacy - c2.avg_literacy);
  else if (c1.avg_literacy < c2.avg_literacy)
    printf
      ("\n The second country has a higher literacy rate than first country by %.2f Percent.",
       c2.avg_literacy - c1.avg_literacy);
  else
    printf ("\n Both the countries have equal literacy rate of %.2f percent.",
	    c1.avg_literacy);

  return 0;
}

/******************************************************************************

Output:

 Enter data for first country as follows:-

 Enter name: ABC

 Enter population: 987654321

 Enter literacy rate of 5 states: 100 98 99 97 96



 Enter data for second country as follows:-

 Enter name: DEF

 Enter population: 963852741

 Enter literacy rate of 5 states: 95 94 93 92 91



 The first country has a higher literacy rate than second country by 5.00 Percent.

*******************************************************************************/


