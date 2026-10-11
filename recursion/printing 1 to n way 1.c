#include<stdio.h>
void inc(int s, int n)
{
    if(s>n)
    {
        return;
    }
    printf("%d\t",s);
    inc(s+1,n);
    
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    inc(1,n);
    return 0;
}