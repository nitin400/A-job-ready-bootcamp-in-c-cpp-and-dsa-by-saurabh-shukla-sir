// 15. Write a program to check whether a given number is positive, negative or zero.
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Number is positive");

    }
    else if(x<0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is zero");
    }
}