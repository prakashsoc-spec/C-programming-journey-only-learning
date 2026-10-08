#include<stdio.h>
int fact(int a)
{
    int i,b=1;
    for(i=2;i<=a;i++)
    {
        b=b*i;
    }
    return b;
}


int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);

    int facto=fact(n);
    printf("the factorial is %d",facto);
    return 0;
}