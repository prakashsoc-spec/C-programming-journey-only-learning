#include<stdio.h>
int main()
{
    int a,b,reminder;
    printf("enter any two number: ");
    scanf("%d%d",&a,&b);

    reminder=a%b;
    printf("remainder is %d",reminder);

    return 0;
}
