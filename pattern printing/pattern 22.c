//*******
//*** ***
//**   **
//*     *

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        printf("*");
    }
    printf("\n");

    for(i=1;i<=3;i++)
    {
        for(j=3;j>=i;j--)
        {
            printf("*");
        }

        for(k=1;k<=i*2-1;k++)
        {
            printf(" ");
        }
        for(int k=3;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
