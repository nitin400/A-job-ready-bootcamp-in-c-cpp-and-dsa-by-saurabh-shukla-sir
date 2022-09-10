#include<stdio.h>
int main()
{
    char c;
    printf("enter any character\n");
    scanf("%c",&c);
    if(c>=97 && c<=122)
    {
        printf("%c is in LOWERCASE",c);
    }

    else if(c>=65 && c<=90)
    {
        printf("%c is in UPPERCASE",c);
    }
    else
    {
        printf("Enter valid character plz...");
    }
}