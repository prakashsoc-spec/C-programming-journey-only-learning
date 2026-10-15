#include<stdio.h>
int main()
{
    int n,i,a[n];
    printf("enter number: ");
    scanf("%d",&n);

     for(i=0;i<=(n-1);i++)
     {
        printf("enter %d number ",i+1);
        scanf("%d",&a[i]);
     }

    int spare=a[0];
    for(i=0;i<=(n-1);i++)
    {
        if(a[i]>spare)
        {
            spare=a[i];
        }
    }
    printf("greatest number among array is %d",spare);
}