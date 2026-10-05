//1
//AB
//123
//ABCD
//12345

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        int s=1;
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                int A;
                A=s+64;
                char ch;
                ch=(char)A;
                printf("%c",ch);
                s++;

            }
            else
            {
                printf("%d",j);
            }

        }
        printf("\n");

    }
}
