#include<stdio.h>
int main()
{
    int a=1,n,b=1,c;
    printf("enter any number: ");
    scanf("%d",&n);

     int i;
    for(i=1;i<=n-1;i++)
    {

        c=a+b;
        a=b;
        b=c;
    }
    printf("the fibonacci term of %d is %d",n,a);
}
