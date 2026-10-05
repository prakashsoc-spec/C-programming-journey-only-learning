//1234321
//123 321
//12   21
//1     1


#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {
        printf("%d",i);
    }
    for(int i=3; i>=1; i--)
    {
        printf("%d",i);
    }
    printf("\n");
    int s=3;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=4-i; j++)
        {
            printf("%d",j);
        }

        for(k=1; k<=i*2-1; k++)
        {
            printf(" ");
        }

        for(int k=s; k>=1; k--)
        {
            printf("%d",k);
        }
        s--;
        printf("\n");
    }
}
