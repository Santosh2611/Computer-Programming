/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* To define a structure "student" which has three fields ID, name and percentage (of marks). 
Write a function display which displays the ID, name and percentage of a particular student. */

#include <stdio.h>
struct student
{
  int id;
  char name[50];
  float percentage;
};

// function prototype
void display (struct student s);

int
main ()
{
  struct student s1;
  printf ("\n Enter ID: ");
  scanf ("%d", &s1.id);
  printf ("\n Enter name: ");
  scanf ("%s", s1.name);
  printf ("\n Enter percentage: ");
  scanf ("%f", &s1.percentage);
  display (s1);			// passing struct as an argument
  return 0;
}

void
display (struct student s)
{
  printf ("\n ID: %d", s.id);
  printf ("\n Name: %s", s.name);
  printf ("\n Percentage: %f", s.percentage);
}

/******************************************************************************

Output:


 Enter ID: 20053



 Enter name: Santosh



 Enter percentage: 8.81



 ID: 20053

 Name: Santosh

 Percentage: 8.810000

*******************************************************************************/


