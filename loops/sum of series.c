#include<stdio.h>
int main()
{
    int n;
    printf("Upto how many number: ");
    scanf("%d",&n);

    int i,a;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           a=a-i;
        }
        else
        {
            a=a+i;
        }
    }
    printf("sum of series is %d",a);
}
