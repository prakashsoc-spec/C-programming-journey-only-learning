
#include<stdio.h>

void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return ;

}
int main()
{
    int a,b;
    int*s,*d;
    s=&a;
    d=&b;
    printf("Enter any two number: ");
    scanf("%d%d",s,d);
    swap(s,d);

    printf("The swap number is %d and %d",*s,*d);
    return 0;
}