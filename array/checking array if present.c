
#include<stdio.h>
#include<stdbool.h>
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
    int x;
    printf("Enter the given number you wanna find: ");
    scanf("%d",&x);
    int s;
    bool check=false;
    for (int i = 0; i <= n - 1; i++)
    {
        if(a[i]==x)
        {
            check=true;
            s=i;
            break;
        }
    }
    if(check==true)
    {
        printf("%d is in your array whose index is %d",x,s);
    }
    else
    {
        printf("%d is in your array",x);
    }
}