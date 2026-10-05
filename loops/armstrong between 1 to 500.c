
#include<stdio.h>
int main()
{
    int i,x,a,r,n;
    for(i=1;i<=500;i++)
        {
            a=i;
            n=i;
            x=0;
            while(n!=0)
                {
                    r=n%10;
                    x=r*r*r+x;
                    n=n/10;
                }
            if(x==a)
                printf("%d\n",a);
        }
}
