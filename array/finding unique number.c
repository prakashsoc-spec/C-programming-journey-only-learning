//find the unique number in a given array where all the elements are being repeated
// twice with one value being unique

#include <stdio.h>
#include<stdbool.h>
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
        bool check = false;
        for (int j = i+1; j <= (n - 1); j++)
        {
            if ((a[i] == a[j]))
            {
                check = true;
            }
        }
        if(check==false)
        {
            printf("%d is unique number",a[i]);
            break;
        }
    }
}