#include<stdio.h>
int fibo(int n)
{
    int a=0, b=1, c, i;

    for(i=1; i<=n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

}
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);

    fibo(n);
    return 0;
}