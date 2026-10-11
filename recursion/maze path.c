// cr=current row
// cc=current column
// er=end row
// ec=end column

#include<stdio.h>
int maze(int cr, int cc,int er,int ec)
{
    int right=0,down=0;
    if(cr==er && cc==ec)
    {
        return 1;
    }
    if(cr==er)
    {
         right+=maze(cr,cc+1,er,ec);
    }
    else if(cc==ec)
    {
         down+=maze(cr+1,cc,er,ec);
    }
    else{
          right+=maze(cr,cc+1,er,ec);
          down+=maze(cr+1,cc,er,ec);
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

    int b=maze(1,1,n,m);
    printf("Ways are %d",b);
}