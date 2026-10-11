#include<stdio.h>
int  power(int a , int b)
{
    if(b==0)
    {
        return 1;
    }
     a=a*power(a,b-1);
    return a;
}
int main()
{
    int a,b;
    printf("enter base: ");
    scanf("%d",&a);
    
    printf("enter power: ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("Power raised  %d to %d is %d",b,a,p);
    return 0;
}