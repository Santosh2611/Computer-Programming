/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int km, m;
    printf("\n Enter the distance in kilometers (km) to convert it into metres (m): ");
    scanf("%d", &km);
    m=(1000*km);
    printf("\n 1 km = 1000 m.");
    printf("\n Therefore, %d km = %d m.", km , m);
    return 0;
}

/******************************************************************************
 Output:
 Enter the distance in kilometers (km) to convert it into metres (m): 5

 1 km = 1000 m.
 Therefore, 5 km = 5000 m.

*******************************************************************************/



