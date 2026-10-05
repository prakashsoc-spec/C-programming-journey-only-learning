#include<stdio.h>
int main()
{
    int a;
    printf("give any positive natural integer: ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("given number is even number");
    }
    else
    {
        printf("given number is odd number");
    }
    return 0;
}
