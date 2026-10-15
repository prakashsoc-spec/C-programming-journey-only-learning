// Given an array of integers, change the value of all odd indexed elements to it second 
// multiple and increment all even indexed value by 10.

#include<stdio.h>
int main()
{
    int n;
    printf("how many elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    int i;
    for( i=0;i<=n-1;i++)
    {
        if(i%2==0)
        {
            int s;
            s=a[i];
            a[i]= s+10;
        }
        else
        {
            int s;
            s=a[i];
            a[i]=s*2;
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d number is %d\n",i+1,a[i]);
    }
}