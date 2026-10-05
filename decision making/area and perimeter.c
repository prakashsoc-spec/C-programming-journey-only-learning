#include<stdio.h>
int main()
{
    int l,b,area,peri;
    printf("enter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);

    area=l*b;
    peri=2*(l+b);

    if(area>peri)
    {
        printf("area is greater than perimeter");
    }
    else if(area<peri)
    {
        printf("area is not greater than perimeter");
    }
    else
    {
        printf("both are equal");
    }
    return 0;
}
