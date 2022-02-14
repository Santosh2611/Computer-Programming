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
  int chem_marks;
  int maths_marks;
  int phy_marks;
} s[5];

int
main ()
{
  int i;
  for (i = 0; i < 5; i++)
    {
      printf ("\n Enter data of student %d as follows:-", i + 1);
      printf ("\n Enter name: ");
      scanf ("%s", s[i].name);
      printf (" Enter roll number: ");
      scanf ("%d", &s[i].roll);
      printf (" Enter chemistry marks: ");
      scanf ("%d", &s[i].chem_marks);
      printf (" Enter maths marks: ");
      scanf ("%d", &s[i].maths_marks);
      printf (" Enter physics marks: ");
      scanf ("%d", &s[i].phy_marks);
    }

  printf ("\n Percentage of each student is as follows:-");
  for (i = 0; i < 5; i++)
    printf ("\n %d. %s - %d: %d Percentage", i + 1, s[i].name, s[i].roll,
	    (s[i].chem_marks + s[i].maths_marks + s[i].phy_marks) / 3);
  return 0;
}

/******************************************************************************

Output:

 Enter data of student 1 as follows:-

 Enter name: ABC

 Enter roll number: 1

 Enter chemistry marks: 100

 Enter maths marks: 99

 Enter physics marks: 98



 Enter data of student 2 as follows:-

 Enter name: DEF

 Enter roll number: 2

 Enter chemistry marks: 97

 Enter maths marks: 96

 Enter physics marks: 95



 Enter data of student 3 as follows:-

 Enter name: GHI

 Enter roll number: 3

 Enter chemistry marks: 94

 Enter maths marks: 93

 Enter physics marks: 92



 Enter data of student 4 as follows:-

 Enter name: JKL

 Enter roll number: 4

 Enter chemistry marks: 91

 Enter maths marks: 90

 Enter physics marks: 89



 Enter data of student 5 as follows:-

 Enter name: MNO

 Enter roll number: 5

 Enter chemistry marks: 88

 Enter maths marks: 87

 Enter physics marks: 86



 Percentage of each student is as follows:-

 1. ABC - 1: 99 Percentage

 2. DEF - 2: 96 Percentage

 3. GHI - 3: 93 Percentage

 4. JKL - 4: 90 Percentage

 5. MNO - 5: 87 Percentage

*******************************************************************************/


