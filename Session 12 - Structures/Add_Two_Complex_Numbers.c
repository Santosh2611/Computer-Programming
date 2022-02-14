/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct complex
{
  float real;
  float imag;
} complex;

complex add (complex n1, complex n2);

int
main ()
{
  complex n1, n2, result;

  printf ("\n For 1st complex number:-");
  printf ("\n Enter the real and imaginary parts: ");
  scanf ("%f %f", &n1.real, &n1.imag);
  printf ("\n For 2nd complex number:-");
  printf ("\n Enter the real and imaginary parts: ");
  scanf ("%f %f", &n2.real, &n2.imag);

  result = add (n1, n2);

  printf ("\n Sum = %.2f + %.2fi", result.real, result.imag);
  return 0;
}

complex
add (complex n1, complex n2)
{
  complex temp;
  temp.real = n1.real + n2.real;
  temp.imag = n1.imag + n2.imag;
  return (temp);
}

/******************************************************************************

Output:

 For 1st complex number:-

 Enter the real and imaginary parts: 1 3



 For 2nd complex number:-

 Enter the real and imaginary parts: 2 4



 Sum = 3.00 + 7.00i

*******************************************************************************/
