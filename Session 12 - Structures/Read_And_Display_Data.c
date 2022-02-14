/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct student
{
  char name[50];
  int roll;
  float marks;
} s;

int
main ()
{
  printf ("\n Enter data as follows:-");
  printf ("\n Enter name: ");
  fgets (s.name, sizeof (s.name), stdin);
  printf (" Enter roll number: ");
  scanf ("%d", &s.roll);
  printf (" Enter marks: ");
  scanf ("%f", &s.marks);

  printf ("\n Data displayed as follows:-");
  printf ("\n Name: ");
  printf ("%s", s.name);
  printf (" Roll Number: %d", s.roll);
  printf ("\n Marks: %.2f", s.marks);

  return 0;
}

/******************************************************************************

Output:

 Enter data as follows:-

 Enter name: Santosh

 Enter roll number: 20053

 Enter marks: 94



 Data displayed as follows:-

 Name: Santosh

 Roll Number: 20053

 Marks: 94.00

*******************************************************************************/

