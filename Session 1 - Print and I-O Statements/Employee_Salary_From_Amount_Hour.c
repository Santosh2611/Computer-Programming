/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int id, hrs, amount, salary;
  printf ("\n Input the Employee ID: ");
  scanf ("%d", &id);
  printf ("\n Input the working hour(s): ");
  scanf ("%d", &hrs);
  printf ("\n Input the salary amount/hour: ");
  scanf ("%d", &amount);
  salary = (amount * hrs);
  printf ("\n Employee ID = %d", id);
  printf ("\n Salary = US $%d", salary);

  return 0;
}

/******************************************************************************
Output:

 Input the Employee ID: 342

 Input the working hour(s): 8

 Input the salary amount/hour: 1500

 Employee ID = 342
 Salary = US $12000

*******************************************************************************/

