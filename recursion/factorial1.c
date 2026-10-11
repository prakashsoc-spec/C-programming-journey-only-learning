#include<stdio.h>
int fact(int n)
{
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    int facto=n*fact(n-1);
    printf("the factorial is %d",facto);
    return 0;
}