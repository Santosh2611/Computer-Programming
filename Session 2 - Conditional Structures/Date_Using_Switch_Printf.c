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
  printf ("\n Enter day: ");
  scanf ("%d", &day);
  printf ("\n Enter month: ");
  scanf ("%d", &month);
  printf ("\n Enter year: ");
  scanf ("%d", &year);
  switch (month)
    {
    case 1:
      printf ("\n %d January %d", day, year);
      break;
    case 2:
      printf ("\n %d February %d", day, year);
      break;
    case 3:
      printf ("\n %d March %d", day, year);
      break;
    case 4:
      printf ("\n %d April %d", day, year);
      break;
    case 5:
      printf ("\n %d May %d", day, year);
      break;
    case 6:
      printf ("\n %d June %d", day, year);
      break;
    case 7:
      printf ("\n %d July %d", day, year);
      break;
    case 8:
      printf ("\n %d August %d", day, year);
      break;
    case 9:
      printf ("\n %d September %d", day, year);
      break;
    case 10:
      printf ("\n %d October %d", day, year);
      break;
    case 11:
      printf ("\n %d November %d", day, year);
      break;
    case 12:
      printf ("\n %d December %d", day, year);
      break;
    default:
      printf ("\n Enter a Valid Month\n");
      break;
    }
    return 0;
}

/******************************************************************************
Output:

 Enter day: 2

 Enter month: 12

 Enter year: 2001

 2 December 2001

*******************************************************************************/

