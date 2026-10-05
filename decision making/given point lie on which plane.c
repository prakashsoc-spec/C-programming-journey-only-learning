#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x and y coordinates: ");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0)
    {
        printf("point lie on origin");
    }
    else if(x==0)
    {
        printf("point lie on y axis");
    }
    else if(y==0)
    {
        printf("point lie on x axis ");
    }
    else
    {
        printf("not confirmed");
    }
}
