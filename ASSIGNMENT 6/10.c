// 10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,i,remainder,reverse=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n)
    {
        remainder=n%10;
        n=n/10;
        reverse=reverse*10+remainder;
    }
    printf("Reverse is %d",reverse);
    
    

    
}