// count the number of elements in given array greater then a given number x
#include<stdio.h>
int main()
{
    int x;
    printf("number: ");
    scanf("%d",&x);
    
    int n,a[n];
    printf("array element: ");
    scanf("%d",&n);

     for(int i=0;i<=n-1;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }

        int s=0;
     for(int i=0;i<=n-1;i++)
    {
        if(a[i]>x)
        {
            s+=1;
        }
    }
    printf("%d",s);
}