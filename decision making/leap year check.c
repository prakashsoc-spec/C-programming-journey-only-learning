#include<stdio.h>
int main()
{
    int n;
    printf("enter any year that you want to find if it is leap year or not");
    scanf("%d",&n);
    int q;
    q=n/2;

    if(q%2==0&&n%2!=1)
    {
        printf("it is leap year");
    }
    else
    {
        printf("it isnot leap year");
    }
    return 0;
}
