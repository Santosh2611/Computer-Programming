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
  int age;
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
      printf (" Enter age: ");
      scanf ("%d", &s[i].age);
    }

  printf ("\n Data of student with roll number 2 is as follows:-");
  printf ("\n Name: ");
  printf ("%s", s[3].name);
  printf ("\n Roll Number: %d", s[3].roll);
  printf ("\n Age: %d", s[3].age);

  return 0;
}

/******************************************************************************

Output:


 Enter data of student 1 as follows:-

 Enter name: ABC

 Enter roll number: 1

 Enter age: 15



 Enter data of student 2 as follows:-

 Enter name: DEF

 Enter roll number: 2

 Enter age: 16



 Enter data of student 3 as follows:-

 Enter name: GHI

 Enter roll number: 3

 Enter age: 17



 Enter data of student 4 as follows:-

 Enter name: JKL

 Enter roll number: 4

 Enter age: 18



 Enter data of student 5 as follows:-

 Enter name: MNO

 Enter roll number: 5

 Enter age: 19



 Data of student with roll number 2 is as follows:-

 Name: JKL

 Roll Number: 4

 Age: 18

*******************************************************************************/

