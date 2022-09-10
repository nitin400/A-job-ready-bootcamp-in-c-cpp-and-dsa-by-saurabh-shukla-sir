/* Write a program to check whether a given number is a three-digit number or not. */
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
   
    if(x<1000 && x>99)
    {
        printf("number is three digit");
    }
    else
    {
        printf("number have not three digits");
    }
    return 0;
}