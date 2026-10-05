#include<stdio.h>
int main()
{
    int a,s,d;
    printf("enter any three number: ");
    scanf("%d%d%d",&a,&s,&d);

    if(a>s&&a>d)
    {
        printf("%d is greatest",a);
    }
    else if(s>a&&s>d)
    {
        printf("%d is greatest",s);
    }
    else
    {
        printf("%d is greatest",d);
    }
    return 0;
}
