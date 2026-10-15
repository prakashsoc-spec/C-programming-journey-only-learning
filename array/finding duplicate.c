// wap to find a duplicate element from a given array of integers.

#include <stdio.h>
int main()
{
    int n,i;
    printf("enter number: ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i <= n - 1; i++)
    {
        printf("enter %d number ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= (n - 1); i++)
    {
        for (int j = i+1; j <= (n - 1); j++)
        {
            if ((a[i] == a[j]))
            {
                printf("the number in the index of %d and %d is duplicate which is %d",i,j,a[i]);
                break;
            }
            else
            {
                continue;
            }
        }
    }
}