#include <stdio.h>
int main()
{
    int n, i;
    printf("enter number: ");
    scanf("%d", &n);
    int a[n];
    int x;

    for (i = 0; i <= n - 1; i++)
    {
        printf("enter %d number ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("enter the value for sum: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i <= (n - 1); i++)
    {
        for (int j = i + 1; j <= (n - 1); j++)
        {
            for (int k = j + 1; k <= (n - 1); k++)
            {

                if ((a[i] + a[j] + a[k]) == 12)
                {
                    count += 1;
                    printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("number of sum is %d", count);
}