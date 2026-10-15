// find the total number of pairs in the array whose sum is equal to
// the given valur x.
//here we don't consider same number pair meaning for 12 6+6 isnot valid

#include <stdio.h>
int main()
{
    int n,i;
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
        for (int j = i+1; j <= (n - 1); j++)
        {
            if ((a[i] + a[j]) == 12)
            {
                count += 1;
            }
        }
    }
    printf("number of sum is %d", count);
}