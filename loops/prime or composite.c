#include<stdio.h>
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);

    int i,a=0;
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            a=a+1;
            break;
        }
    }

    if(a==0)
    {
        printf("number is prime");
    }
    else
    {
        printf("the number is composite");
    }
}
