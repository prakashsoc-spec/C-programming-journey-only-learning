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
    else
    {
        printf("it is not");
    }
    return 0;
}
