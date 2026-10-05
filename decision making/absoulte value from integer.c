#include<stdio.h>
int main()
{
    int n,a;
    printf("enter any integer: ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("The absolute value is %d",n);
    }
    else if(n<0)
    {

        a=-2*n+n;
        printf("The absolute value is %d",a);
    }
    else
    {
        printf("The absolute value is 0");
    }
    return 0;
}
