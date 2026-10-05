#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter cost price and selling price: ");
    scanf("%d%d",&cp,&sp);

    if(sp>cp)
    {
        printf("seller has made profit of Rs:%d ",sp-cp);
    }
    else if(cp>sp){
    printf("seller has made loss in his business which is Rs:%d",-cp+sp);
    }
    else{
        printf("balanced");
    }
    return 0;
}
