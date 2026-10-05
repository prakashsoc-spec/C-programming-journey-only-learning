//#include<stdio.h>
//int main()
//{
//    int n, a;
//    printf("enter any number: ");
//    scanf("%d", &n);
//
//    for (a = 0; n != 0; n = n / 10)
//    {
//        a = a + 1;
//    }
//    printf("%d", a);
//}

#include<stdio.h>
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d", &n);

    int a=0;
    while(n!=0)
    {
        n=n/10;
        a=a+1;
    }
    printf("%d",a);
}
