#include<stdio.h>
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);

    if(a>99&&a<1000)
    {
        printf("it is three digit number");
    }
    else
    {
        printf("it is not");
    }
    return 0;
}
