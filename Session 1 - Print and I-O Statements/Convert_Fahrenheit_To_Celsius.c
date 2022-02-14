/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float f, c;
    printf("\n Enter the temperature in Fahrenheit (F) to convert to Celsius (C): ");
    scanf("%f", &f);
    c=((f-32)*5)/9;
    printf("\n Therefore, the temperature %f F is equivalent to %f C.", f, c);

    return 0;
}

/******************************************************************************

 Enter the temperature in Fahrenheit (F) to convert to Celsius (C): 100.4

 Therefore, the temperature 100.400002 F is equivalent to 38.000000 C.


*******************************************************************************/
