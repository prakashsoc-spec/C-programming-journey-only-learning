#include<stdio.h>
int  power(int a , int b)
{
    int s;
    if(b==0 )
    {
        return 1;
    }
    if(b%2==0)
    {
        s=power(a,b/2);
        return s*s;
    }
    
    else
    {
        s=power(a,b/2);
        return s*s*a;
    }
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