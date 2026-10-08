// this is very simple method.
// I am using third variable for that.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("The swap number is %d and %d",a,b);
    return 0;
}