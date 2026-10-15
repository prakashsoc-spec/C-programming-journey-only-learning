// given an array containing elements from 1 to n except one element
// in this range is missing. find the missing element.
#include<stdio.h>
int main()
{
  int n;
    printf("array element: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n - 2; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0;i<=n-2;i++)
    {
        sum=sum+a[i];
    }
    int sum1= (n*(n+1))/2;
    printf("sum from 1 to n number you have entered: %d\n",sum1);
    
    int miss=(sum1-sum);
    printf("missing element is %d",miss);
    return 0;
}