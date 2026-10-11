// We are finding how many ways are there for going upstairs in given number of stairs.
// We are assuming we can go one or two or three steps at a time.

#include<stdio.h>
int stair(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    if(n==3)
    {
        return 4;
    }
    int a=stair(n-1)+stair(n-2)+stair(n-3);
    return a;
}
int main()
{
    int n;
    printf("how many stairs: ");
    scanf("%d",&n);

    int a=stair(n);
    printf("%d",a);
    return 0;
}