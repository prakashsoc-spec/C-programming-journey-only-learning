#include<stdio.h>
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);

    if(a%3==0 && a%5==0)
    {
        printf("given number is divisible by both");
    }
    else if(a%3==0 || a%5==0)
    {
        printf("it is divisible by any one of them");
    }
    else
    {
        printf("it is not divisible by both");
    }
    return 0;
}

