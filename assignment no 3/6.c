// 6. Write a program to print greater between two numbers. Print one number of both are 
// // the same.

#include<stdio.h>
int main()
{
    int x,y;
    printf("enter first number");
    scanf("%d",&x);

    printf("enter second  number");
    scanf("%d",&y);
    if(x==y)
    {
        printf("greater number is %d",x);
    }
    if(x>y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}