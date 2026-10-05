#include<stdio.h>
int main()
{
    int a,s,d;
    printf("enter any three numbers: ");
    scanf("%d%d%d",&a,&s,&d);

    if(a+s>d && a+d>s && s+d>a)
    {
        printf("they can be sides of a triangle");
    }
    else
    {
        printf("they can't be a triangle");
    }
    return 0;
}
