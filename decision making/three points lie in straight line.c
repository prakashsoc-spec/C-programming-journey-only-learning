#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("enter the values of  x1,x2,x3,y1,y2,y3");
    scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3);
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2))
    {
        printf("All three points lie in same line");
    }
    else
    {
        printf("All three points doesnot lie in same line");
    }
}
