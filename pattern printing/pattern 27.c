//
//1111111
//1222221
//1233321
//1234321
//1233321
//1222221
//1111111

#include<stdio.h>
int main()
{
    int i,j,a,b;
    for(i=1;i<=7;i++)
        {
            for(j=1;j<=7;j++)
                {
                    a=i;
                    if(a>4) a=2*4-i;

                    b=j;
                    if(b>4) b=2*4-j;
                    if(a<b)
                    {
                        printf("%d",a);
                    }
                    else
                    {
                        printf("%d",b);
                    }
                }
            printf("\n");
        }
}
