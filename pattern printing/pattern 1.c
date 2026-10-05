//*****
//*****
//*****



#include<stdio.h>
int main()
{
    int m,n;
    printf("enter no. of lines: ");
    scanf("%d",&n);

    int i,j;
    printf("star in each line: ");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
