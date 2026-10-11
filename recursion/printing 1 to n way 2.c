// after recursive call

#include<stdio.h>
void dec(int n)
{
    if(n==1)
    {
        printf("%d\t",n);
        return;
    }
    dec(n-1);
    printf("%d\t",n);
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    dec(n);
    return 0;
}