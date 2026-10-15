#include<stdio.h>
int main()
{
    int a[3];
    for(int i=0;i<=2;i++)
    {
        printf("enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    // for sum
    int s=0;
    for(int i=0;i<=2;i++)
    {
        s=s+a[i];
    }
    printf("sum is %d ",s);
}