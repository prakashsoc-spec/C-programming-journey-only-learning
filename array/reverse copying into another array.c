// write a program to copy the contents of one array into another
// in the reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("array element: ");
    scanf("%d",&n);
    int a[n],b[n];
     for(int i=0;i<=n-1;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    int d=0;
    for(int i=n-1;i>=0;i--)
    {
        b[d]=a[i];
        d++;
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d element of second array is: %d\n",i+1,b[i]);
    }
}