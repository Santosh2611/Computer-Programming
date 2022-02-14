/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct time_struct
{
  int day;
  int month;
  int year;
} t;

int
main ()
{
  char season[50];
  printf ("\n Enter Day: ");
  scanf ("%d", &t.day);
  printf ("\n Enter Month: ");
  scanf ("%d", &t.month);
  printf ("\n Enter Year: ");
  scanf ("%d", &t.year);
  if (t.month == 1)
    {
      strcpy (season, "January");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 2)
    {
      strcpy (season, "February");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 3)
    {
      strcpy (season, "March");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 4)
    {
      strcpy (season, "April");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 5)
    {
      strcpy (season, "May");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 6)
    {
      strcpy (season, "June");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 7)
    {
      strcpy (season, "July");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 8)
    {
      strcpy (season, "August");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 9)
    {
      strcpy (season, "September");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 10)
    {
      strcpy (season, "October");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 11)
    {
      strcpy (season, "November");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else if (t.month == 12)
    {
      strcpy (season, "December");
      printf ("\n Date - %d %s %d", t.day, season, t.year);
    }
  else
    {
      strcpy (season, "July");
      printf ("\n Invalid Month Name.");
    }
  return 0;
}

/******************************************************************************

Output:

 Enter Day: 12



 Enter Month: 12



 Enter Year: 1990



 Date - 12 December 1990

*******************************************************************************/

