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
  printf ("\n Enter Hour: ");
  scanf ("%d", &t.hour);
  printf ("\n Enter Minute: ");
  scanf ("%d", &t.minute);
  printf ("\n Enter Second: ");
  scanf ("%d", &t.second);

  printf ("\n Time - %d:%d:%d", t.hour % 24, t.minute % 60, t.second % 60);

  return 0;
}

/******************************************************************************

Output:

 Enter Hour: 16



 Enter Minute: 40



 Enter Second: 51



 Time - 16:40:51

*******************************************************************************/

