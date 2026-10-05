// 1 3 5 7 9------- n terms

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter upto n terms: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}
