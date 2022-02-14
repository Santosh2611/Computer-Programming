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
  int day, month, year;
  int pday, pmonth, pyear;
  int nday, nmonth, nyear;
  printf ("\n Input a date (dd/mm/yy): ");
  scanf ("%d %d %d", &day, &month, &year);
  if (month == 1)
    {
      if (day == 1)
	{
	  pday = 31;
	  pmonth = 12;
	  pyear = year - 1;
	}
      else
	{
	  pday = day - 1;
	  pmonth = month;
	  pyear = year;
	}
      printf ("\n Previous date: %d %d %d", pday, pmonth, pyear);
      if (day == 31)
	{
	  nday = 1;
	  nmonth = month + 1;
	  nyear = year;
	}
      else
	{
	  nday = day + 1;
	  nmonth = month;
	  nyear = year;
	}
      printf ("\n Next date: %d %d %d", nday, nmonth, nyear);
    }
  else if (month == 2)
    {
      if (day == 1)
	{
	  pday = 31;
	  pmonth = month - 1;
	  pyear = year;
	}
      else
	{
	  pday = day - 1;
	  pmonth = month;
	  pyear = year;
	}
      printf ("\n Previous date: %d %d %d", pday, pmonth, pyear);
      if (day == 28 || day == 29)
	{
	  nday = 1;
	  nmonth = month + 1;
	  nyear = year;
	}
      else
	{
	  nday = day + 1;
	  nmonth = month;
	  nyear = year;
	}
      printf ("\n Next date: %d %d %d", nday, nmonth, nyear);
    }
  else if (month == 3)
    {
      if (day == 1)
	{
	  if ((year % 4) == 0)
	    {
	      pday = 29;
	      pmonth = month - 1;
	      pyear = year;
	    }
	  else
	    {
	      pday = 28;
	      pmonth = month - 1;
	      pyear = year;
	    }
	}
      else
	{
	  pday = day - 1;
	  pmonth = month;
	  pyear = year;
	}
      printf ("\n Previous date: %d %d %d", pday, pmonth, pyear);
      if (day == 31)
	{
	  nday = 1;
	  nmonth = month + 1;
	  nyear = year;
	}
      else
	{
	  nday = day + 1;
	  nmonth = month;
	  nyear = year;
	}
      printf ("\n Next date: %d %d %d", nday, nmonth, nyear);
    }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      if (day == 1)
	{
	  pday = 31;
	  pmonth = month - 1;
	  pyear = year;
	}
      else
	{
	  pday = day - 1;
	  pmonth = month;
	  pyear = year;
	}
      printf ("\n Previous date: %d %d %d", pday, pmonth, pyear);
      if (day == 30)
	{
	  nday = 1;
	  nmonth = month + 1;
	  nyear = year;
	}
      else
	{
	  nday = day + 1;
	  nmonth = month;
	  nyear = year;
	}
      printf ("\n Next date: %d %d %d", nday, nmonth, nyear);
    }
  else if (month == 5 || month == 7 || month == 8 || month == 10)
    {
      if (day == 1)
	{
	  pday = 30;
	  pmonth = month - 1;
	  pyear = year;
	}
      else
	{
	  pday = day - 1;
	  pmonth = month;
	  pyear = year;
	}
      printf ("\n Previous date: %d %d %d", pday, pmonth, pyear);
      if (day == 31)
	{
	  nday = 1;
	  nmonth = month + 1;
	  nyear = year;
	}
      else
	{
	  nday = day + 1;
	  nmonth = month;
	  nyear = year;
	}
      printf ("\n Next date: %d %d %d", nday, nmonth, nyear);
    }
  else if (month == 12)
    {
      if (day == 1)
	{
	  pday = 30;
	  pmonth = month - 1;
	  pyear = year;
	}
      else
	{
	  pday = day - 1;
	  pmonth = month;
	  pyear = year;
	}
      printf ("\n Previous date: %d %d %d", pday, pmonth, pyear);
      if (day == 31)
	{
	  nday = 1;
	  nmonth = 1;
	  nyear = year + 1;
	}
      else
	{
	  nday = day + 1;
	  nmonth = month;
	  nyear = year;
	}
      printf ("\n Next date: %d %d %d", nday, nmonth, nyear);
    }
  else
    printf ("\n Invalid Month Number.");
  return 0;
}

/******************************************************************************
Output:

 Input a date (dd/mm/yy): 31 12 1991

 Previous date: 30 12 1991
 Next date: 1 1 1992

*******************************************************************************/

