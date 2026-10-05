#include<stdio.h>
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);

    int a,s=0;
    while(n!=0)
    {
    a=n%10;
    s=s+a;
    n=n/10;
    }
    printf("sum of digits is %d ",s);
}
