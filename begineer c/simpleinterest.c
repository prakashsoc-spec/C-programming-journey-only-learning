#include<stdio.h>
int main()
{
    int principle;
    float time, rate, si;

    printf("enter the principle: ");
    scanf("%d",&principle);


    printf("enter the time: ");
    scanf("%f",&time);


    printf("enter the rate: ");
    scanf("%f",&rate);

    si=(principle*time*rate)/100;

    printf("simple interest is : %f",si);
    return 0;
}
