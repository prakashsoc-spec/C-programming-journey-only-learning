#include<stdio.h>
int main()
{
    float area, pi=3.14, r;
    printf("enter radius of circle: ");
    scanf("%f",&r);

    area=pi*r*r;
    printf("the area of circle is %f",area);

    return 0;
}
