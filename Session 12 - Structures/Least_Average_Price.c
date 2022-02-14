/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct product
{
  char name[50];
  double model_number;
  float price[3];
  float avg_price;
} p1, p2;

int
main ()
{
  int i, sum = 0;
  printf ("\n Enter data for first product as follows:-");
  printf ("\n Enter name: ");
  scanf ("%s", p1.name);
  printf (" Enter model number: ");
  scanf ("%lf", &p1.model_number);
  printf (" Enter price of 3 products: ");
  for (i = 0; i < 3; i++)
    {
      scanf ("%f", &p1.price[i]);
      sum = sum + p1.price[i];
    }
  p1.avg_price = sum / 3;
  sum = 0;

  printf ("\n Enter data for second product as follows:-");
  printf ("\n Enter name: ");
  scanf ("%s", p2.name);
  printf (" Enter model number: ");
  scanf ("%lf", &p2.model_number);
  printf (" Enter price of 3 products: ");
  for (i = 0; i < 3; i++)
    {
      scanf ("%f", &p2.price[i]);
      sum = sum + p2.price[i];
    }
  p2.avg_price = sum / 3;

  if (p1.avg_price > p2.avg_price)
    printf
      ("\n The second product has a lesser average price than first product by %.2f Percent.",
       p1.avg_price - p2.avg_price);
  else if (p1.avg_price < p2.avg_price)
    printf
      ("\n The first product has a lesser average price than second product by %.2f Percent.",
       p2.avg_price - p1.avg_price);
  else
    printf ("\n Both the products have equal average price of %.2f percent.",
	    p1.avg_price);

  return 0;
}

/******************************************************************************

Output:

 Enter data for first product as follows:-

 Enter name: ABC

 Enter model number: 987654321

 Enter price of 3 products: 100 99 98



 Enter data for second product as follows:-

 Enter name: DEF

 Enter model number: 123456789

 Enter price of 3 products: 97 96 95



 The second product has a lesser average price than first product by 3.00 Percent.

*******************************************************************************/

