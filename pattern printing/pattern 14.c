//1
//01
//101
//0101




#include<stdio.h>
int main()
{
    int n;
    printf("how many number: ");
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || (i-j)==2)
            {
                printf("1");
            }
            else if(i>j)
            {
                printf("0");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
