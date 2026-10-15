#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number: ");
    scanf("%d",&n);
    int a[n];
     for(i=0;i<=(n-1);i++)
     {
        printf("enter %d number ",i+1);
        scanf("%d",&a[i]);
     }

    int spare=a[0],s;
    for(i=0;i<=(n-1);i++)
    {
        if(a[i]>spare)
        {
            s=spare;
            spare=a[i];
        }
    }
    printf(" second greatest number among array is %d",s);
}