// here we solved from different method compare to combination way 1 

#include<stdio.h>
int factorial(int n){
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}

int main()
{
  int n,r,fact;
  printf("enter value of n and r : ");
  scanf("%d%d",&n,&r);
  
  fact=factorial(n)/(factorial(r)*factorial(n-r));  // number is flowing 

  printf("The combination of %dc%d is %d",n,r,fact);
  return 0;

}