#include<stdio.h>
int maze(int a,int b)
{
    int right=0,down=0;
    if( a==1 && b==1)
    {
        return 1;
    }
    if(a==1)
    {
         right+=maze(a,b-1);
    }
    else if(b==1)
    {
         down+=maze(a-1,b);
    }
    else{
          right+=maze(a,b-1);
          down+=maze(a-1,b);
    }

    int totalways= right+down;
    return totalways;
}
int main()
{
    int n,m;
    printf("enter no. of rows: ");
    scanf("%d",&n);

    
    printf("enter no. of colums: ");
    scanf("%d",&m);

    int b=maze(n,m);
    printf("Ways are %d",b);
}