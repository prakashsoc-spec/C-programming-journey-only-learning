// find the difference between the sum of elements at even indices 
// to the sum of elements at odd indices.

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
    int i,sumeven=0,sumodd=0;
    for( i=0;i<=n-1;i++)
    {
        if(i%2==0)
        {
          sumeven = sumeven+a[i];
        }
        else
        {
            sumodd = sumodd+a[i];
        }
    }
    printf("difference of sum of even to the sum of odd id %d",sumeven-sumodd);
}