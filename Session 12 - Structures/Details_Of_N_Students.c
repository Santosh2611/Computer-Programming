/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct student
{
  int roll;
  int mark1;
  int mark2;
  int total;
} s[100];

void class_average (struct student s[], int n);
void total_subject1 (struct student s[], int n);
void student_details (struct student s[], int n);

int
main ()
{
  int n, i;
  printf ("\n Enter the number of student(s): ");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      printf ("\n Enter the details for student %d as follows:-", i + 1);
      printf ("\n Roll Number: ");
      scanf ("%d", &s[i].roll);
      printf (" Mark for Subject 1: ");
      scanf ("%d", &s[i].mark1);
      printf (" Mark for Subject 2: ");
      scanf ("%d", &s[i].mark2);
      s[i].total = s[i].mark1 + s[i].mark2;
    }
  class_average (s, n);
  total_subject1 (s, n);
  student_details (s, n);
  return 0;
}

void
class_average (struct student s[], int n)
{
  int i, sum = 0;
  float avg;
  for (i = 0; i < n; i++)
    sum = sum + s[i].total;
  avg = sum / n;
  printf ("\n (a) The class average is %.2f.", avg);
}

void
total_subject1 (struct student s[], int n)
{
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum = sum + s[i].mark1;
  printf
    ("\n\n (b) The total marks scored by all students for first subject is %d.",
     sum);
}

void
student_details (struct student s[], int n)
{
  int number, i, count = 0;
  printf ("\n\n (c) Enter the roll number: ");
  scanf ("%d", &number);
  for (i = 0; i < n; i++)
    {
      if (number == s[i].roll)
	{
	  printf
	    ("  The details of student with roll number %d is as follows:-",
	     s[i].roll);
	  printf ("\n  Mark of Subject 1: %d", s[i].mark1);
	  printf ("\n  Mark of Subject 2: %d", s[i].mark2);
	  printf ("\n  Total Marks: %d", s[i].total);
	  count++;
	}
    }
  if (count == 0)
    printf ("\n Roll Number Not Found.");
}

/******************************************************************************

Output:

 Enter the number of student(s): 2



 Enter the details for student 1 as follows:-

 Roll Number: 1

 Mark for Subject 1: 100

 Mark for Subject 2: 98



 Enter the details for student 2 as follows:-

 Roll Number: 2

 Mark for Subject 1: 99

 Mark for Subject 2: 97



 (a) The class average is 197.00.



 (b) The total marks scored by all students for first subject is 199.



 (c) Enter the roll number: 2

  The details of student with roll number 2 is as follows:-

  Mark of Subject 1: 99

  Mark of Subject 2: 97

  Total Marks: 196

*******************************************************************************/


