//1
//13
//135
//1357

#include<stdio.h>
int main()
{
     int i,j;

    for(i=1;i<=7;i=i+2)
    {
        for(j=1;j<=i;j=j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
