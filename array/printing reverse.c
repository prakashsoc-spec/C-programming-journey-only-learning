#include<stdio.h>
int main()
{
    int ar[4];
    int i;
    for(i=0;i<=3;i++)
    {
        printf("Enter %d element: ",i);
        scanf("%d",&ar[i]);
    }
    //printting in reverse order

    for(i=3;i>=0;i--)
    {
        printf("Enter %d element is %d\n ",i,ar[i]);
    }
}