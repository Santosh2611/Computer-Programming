/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct citizen
{
  int id;
  int age;
} c;

int
main ()
{
  printf ("\n Enter citizen id: ");
  scanf ("%d", &c.id);
  printf (" Enter age: ");
  scanf ("%d", &c.age);
  if (c.age < 0)
    printf ("\n Invalid Age Entered.");
  else if (c.age >= 0 && c.age <= 18)
    printf ("\n %d is a minor citizen.", c.id);
  else if (c.age >= 19 && c.age <= 60)
    printf ("\n %d is a major citizen.", c.id);
  else
    printf ("\n %d is a senior citizen.", c.id);
  return 0;
}

/******************************************************************************

Output:

 Enter citizen id: 1234

 Enter age: 19



 1234 is a major citizen.

*******************************************************************************/


