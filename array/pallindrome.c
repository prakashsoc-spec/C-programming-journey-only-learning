#include<stdio.h>
int main()
{
    int n;
    printf("array element: ");
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<=n-1;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }

    int i=0,j=n-1;
    while (i<=j)
    {
         if(a[i]!=a[j])
         {
            printf("not palliindrome");
            break;
         }
         else
         {
            if(i==j)
            {
                printf("pallindrome");
            }
         }
         i++;
         j--;
    }

}