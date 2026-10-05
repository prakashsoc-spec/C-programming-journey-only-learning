#include<stdio.h>
int main()
{
    int a=1,b=1,c,n,i;
    printf("how many number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d %d %d ",a,b,c);
        a=b+c;
        b=c+a;

    }

    return 0;
}
