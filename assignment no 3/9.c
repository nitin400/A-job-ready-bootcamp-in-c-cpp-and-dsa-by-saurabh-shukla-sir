// Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    printf("Enter third number");
    scanf("%d",&z);

    if(x>=y && x>=z)
    {
        printf("%d is the greatest number",x);
    }

    else if(y>=x && y>=z)
    {
        printf("%d is the greatest number",y);
    }

    //if(z>=y && z>=x)
    else
    {
        printf("%d is the greatest number",z);
    }
}