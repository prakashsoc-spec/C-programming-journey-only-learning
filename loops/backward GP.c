// 100 50 25 ----- n terms

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number: ");
    scanf("%d",&n);
    float a=100;
    for(i=1;i<=n;i++)
    {
        printf("%f ",a);
        a=a/2;
    }
}
