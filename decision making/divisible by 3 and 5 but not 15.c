#include<stdio.h>
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);

    if(n%3==0 || n%5==0)
    {
        if(n%15==0)
        {
            printf("divisible by 5 or 3 and also with 15");
        }
        else
        {
            printf("divisible by 5 or 3 but not 15");
        }
    }
    else
    {
        printf("number is not divisible by 3 or 5");
    }
    return 0;
}
