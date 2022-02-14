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
  char mon[25];
  printf ("\n Enter day: ");
  scanf ("%d", &day);
  printf ("\n Enter month: ");
  scanf ("%d", &month);
  printf ("\n Enter year: ");
  scanf ("%d", &year);
  switch (month)
    {
    case 1:
      mon[] = "January";
      break;
    case 2:
      mon[] = "February";
      break;
    case 3:
      mon[] = "March";
      break;
    case 4:
      mon[] = "April";
      break;
    case 5:
      mon[] = "May";
      break;
    case 6:
      mon[] = "June";
      break;
    case 7:
      mon[] = "July";
      break;
    case 8:
      mon[] = "August";
      break;
    case 9:
      mon[] = "September";
      break;
    case 10:
      mon[] = "October";
      break;
    case 11:
      mon[] = "November";
      break;
    case 12:
      mon[] = "December";
      break;
    default:
      mon[] = "Enter a valid month";
      break;
    }
  printf ("\n The date is: %d %s %d", day, mon, year);
  return 0;
}
