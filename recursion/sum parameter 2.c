#include<stdio.h>
int   sum(int n,int a)
{
   if(n==0)
   {
    return a;
   }
   sum(n-1,a+n);
   
}
int main()
{
    int n,a;
    printf("enter any number: ");
    scanf("%d",&n);

    a= sum(n,0);
    printf("%d",a);
    return 0;
}