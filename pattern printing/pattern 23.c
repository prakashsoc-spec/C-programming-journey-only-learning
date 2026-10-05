//1234567
//123 567
//12   67
//1     7


#include<stdio.h>
int main()
{
     int i,j,k;
    for(i=1;i<=7;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    int s=5;
    for(i=1;i<=3;i++)
    {

        for(j=1;j<=4-i;j++)
        {
            printf("%d",j);
        }

        for(k=1;k<=i*2-1;k++)
        {
            printf(" ");
        }
        for(int k=s;k<=7;k++)
        {
            printf("%d",k);
        }
        s++;
        printf("\n");

    }
}
