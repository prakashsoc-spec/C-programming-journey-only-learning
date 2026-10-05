#include<stdio.h>
#include<conio.h>
int main()
{
    float a,fractional;
    printf("enter number: ");
    scanf("%f",&a);

    int s;
    s=a;
    printf("%d",s);

    getch();
    fractional=a-s;
    printf("the fractional part is %f",fractional);
    return 0;
}
