#include<stdio.h>
int main()
{
    int i;
    int n,m=1;
    printf("enter number to find it's factorial: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    printf("the factorial is %d",m);

}
