#include<stdio.h>
int main()
{
    int a=1,n,b=1,c;
    printf("enter any number: ");
    scanf("%d",&n);

     int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}

