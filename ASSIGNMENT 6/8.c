// 8. Write a program to check whether a given number is a Prime number or
// not

#include<stdio.h>
int main()
{
    int x,i,flag;
    printf("Enter the number");
    scanf("%d",&x);
    for (i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("not prime");

    }
    else
    {
        printf("prime");
    }
    
}