#include<stdio.h>
void dec(int n)
{
    if(n==1)
    {
        printf("%d",n);
        return;
    }
    printf("%d\t",n);
    dec(n-1);
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    dec(n);
    return 0;
}