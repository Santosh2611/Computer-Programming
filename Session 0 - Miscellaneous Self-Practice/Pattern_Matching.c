/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int m,n,i,j;
    char a[10],b[10];
    gets(a);
    gets(b);
    n=strlen(a);
    m=strlen(b);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
                if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
                {
                    printf("%c",toupper(a[i]));
                }
                else
                {
                    printf(".");
                }
            }
            else
            {
                printf("%c",tolower(a[i]));
            }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
            {
                 printf("%c",toupper(b[i]));
            }
            else
            {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                {
                     printf(".");
                }
                else
                {
                   printf("%c",tolower(b[i]));
                }
            }
    }
    return 0;
}

/******************************************************************************

Output:
Hello

World

hEll.

wOrl.

*******************************************************************************/

