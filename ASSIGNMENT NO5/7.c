// 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    while(n)
    {
        if(n%2==0){
            printf("%d\n",n);
        }
        n--;
    }
}