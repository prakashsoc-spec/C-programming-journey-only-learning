#include<stdio.h>
int main()
{
    int a,b,c=1,i;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);

    for(i=1;i<=b;i++)
    {
        c=c*a;
    }
    printf("%d",c);
}
