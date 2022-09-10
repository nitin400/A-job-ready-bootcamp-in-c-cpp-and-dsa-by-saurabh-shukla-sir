// 5. Write a program to print the first N odd natural numbers in reverse order.


#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n)
    {
        if(i%2)
        {
            printf("%d\n",n);

        }
            
        n--;
        
    }
}