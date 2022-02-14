/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct time_struct
{
  int hour;
  int minute;
  int second;
} t;

int
main ()
{
  printf ("\n Enter Hour(s): ");
  scanf ("%d", &t.hour);
  printf ("\n Enter Minute(s): ");
  scanf ("%d", &t.minute);
  printf ("\n Enter Second(s): ");
  scanf ("%d", &t.second);
  if (t.hour > 24 || t.minute > 60 || t.second > 60)
    printf ("\n Error, Invalid Values.");
  else
    printf ("\n Time - %d hour(s) : %d minute(s) : %d second(s)", t.hour,
	    t.minute, t.second);
  return 0;
}

/******************************************************************************

Output:

 Enter Hour(s): 1



 Enter Minute(s): 12



 Enter Second(s): 23



 Time - 1 hour(s) : 12 minute(s) : 23 second(s)

*******************************************************************************/


