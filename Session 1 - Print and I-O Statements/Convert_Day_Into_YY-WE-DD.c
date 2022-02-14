/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number, years, weeks, days;
    printf("\n Enter the number of days: ");
    scanf("%d", &number);
    years=number/365;
    printf("\n Years: %d", years);
    weeks=(number-(365*years))/7;
    printf("\n Weeks: %d", weeks);
    days=(number-(365*years)-(7*weeks));
    printf("\n Days: %d", days);

    return 0;
}

/******************************************************************************
Output:

 Enter the number of days: 1329

 Years: 3
 Weeks: 33
 Days: 3

*******************************************************************************/

