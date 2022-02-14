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
  input (t);
  return 0;
}

void
input (struct time_struct t)
{
  printf ("\n Enter Hour: ");
  scanf ("%d", &t.hour);
  printf ("\n Enter Minute: ");
  scanf ("%d", &t.minute);
  printf ("\n Enter Second: ");
  scanf ("%d", &t.second);
  display (t.hour, t.minute, t.second);
}

void
display (int hour, int minute, int second)
{
  printf ("\n Time - %d:%d:%d", hour % 24, minute % 60, second % 60);
}

/******************************************************************************

Output:

 Enter Hour: 16



 Enter Minute: 40



 Enter Second: 51



 Time - 16:40:51

*******************************************************************************/

