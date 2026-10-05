// 1 2 4 8 16 32   ----- nterms

#include<stdio.h>
int main()
{
    int i,n,a;
    printf("enter n terms: ");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
    {
       printf("%d ",a);
       a=a*2;
    }
}
