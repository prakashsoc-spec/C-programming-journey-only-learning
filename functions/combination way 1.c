// we are asked to find combination using functions
// so basically combination's formula is : n! / r! * (n-r)!
// for that we must find the value of all factorial
//here we have separated three different function for different factorial.
// in another file named "combination way 2" we solved it by easy method.

#include<stdio.h>
int nfact(int n){
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}

int rfact(int r){
    int a=1;
    for(int i=2;i<=r;i++)
    {
        a=a*i;
    }
    return a;
}

int nrfact(int n, int r){
    int a=1;
    for(int i=2;i<=(n-r);i++)
    {
        a=a*i;
    }
    return a ;
}
int main()
{
  int n,r,fact;
  printf("enter value of n and r : ");
  scanf("%d%d",&n,&r);
  int a= nfact(n);

  int b= rfact(r);

  int c= nrfact(n,r);
  
  fact=a/(b*c);

  printf("The combination of %dc%d is %d",n,r,fact);
  return 0;

}