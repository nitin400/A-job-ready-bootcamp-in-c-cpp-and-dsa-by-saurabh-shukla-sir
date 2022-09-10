// 2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    x=x%10;
    printf("%d",x);
}
