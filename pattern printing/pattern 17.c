//   A
//  AB
// ABC
//ABCD


#include<stdio.h>
int main()
{
    int i,j,k,a;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        a=65;
        for(k=1;k<=i;k++)
        {

            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}
