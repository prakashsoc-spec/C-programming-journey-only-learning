//ABCDEFG
//ABC EFG
//AB   FG
//A     G


#include<stdio.h>
int main()
{
     int i,j,k;
    for(i=65;i<=71;i++)
    {
        printf("%c",i);
    }
    printf("\n");
    int s=69;
    for(i=1;i<=3;i++)
    {

        for(j=65;j<=68-i;j++)
        {
            printf("%c",j);
        }

        for(k=1;k<=i*2-1;k++)
        {
            printf(" ");
        }
        for(int k=s;k<=71;k++)
        {
            printf("%c",k);
        }
        s++;
        printf("\n");

    }
}
