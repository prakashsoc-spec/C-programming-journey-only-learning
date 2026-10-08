// without using third variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;    

    printf("The swap number is %d and %d",a,b);
    return 0;
    
}