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
  float marks[5];
} s;

int
main ()
{
  int i;
  printf ("\n Enter data as follows:-");
  printf ("\n Enter name: ");
  fgets (s.name, sizeof (s.name), stdin);
  printf (" Enter roll number: ");
  scanf ("%d", &s.roll);
  printf (" Enter marks of five subjects: ");
  for (i = 0; i < 5; i++)
    scanf ("%f", &s.marks[i]);

  printf ("\n Data displayed as follows:-");
  printf ("\n Name: ");
  printf ("%s", s.name);
  printf (" Roll Number: %d", s.roll);
  printf ("\n Marks of five subjects: ");
  for (i = 0; i < 5; i++)
    printf ("%.2f ", s.marks[i]);

  return 0;
}

/******************************************************************************

Output:

 Enter data as follows:-

 Enter name: Santosh

 Enter roll number: 20053

 Enter marks of five subjects: 92 91 90 78 95



 Data displayed as follows:-

 Name: Santosh

 Roll Number: 20053

 Marks of five subjects: 92.00 91.00 90.00 78.00 95.00

*******************************************************************************/

