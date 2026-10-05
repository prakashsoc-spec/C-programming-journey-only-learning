//1
//23
//456
//78910


#include<stdio.h>
int main()
{
    int i,j,n,a,s;
    printf("enter no of lines: ");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;

        }

        printf("\n");
    }
}
