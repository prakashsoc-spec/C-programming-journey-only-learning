// rotate the given array a by k steps, where k is non-negative.
// note: k can be greater than n as well where n is the size of array a

#include <stdio.h>
int main()
{
    int n;
    printf("array element: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    int k;
    printf("enter how many times you wanna rotate: ");
    scanf("%d", &k);

    k = k % n;
    for (int i = 0, j = k - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = k, j = n - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d element is %d\n", i + 1, a[i]);
    }
}
