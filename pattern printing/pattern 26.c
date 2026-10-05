//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444


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
                        printf("%d",5-a);
                    }
                    else
                    {
                        printf("%d",5-b);
                    }
                }
            printf("\n");
        }
}

