//                1
//              1   1
//            1   2   1
//          1   3   3   1
//        1   4   6   4   1
//      1   5  10  10   5   1
//    1   6  15  20  15   6   1

// In this method, we simply created a new function called combination.
// And that combination function calls the factorial function.
// in simple language, we just created a new function for combination .
// But in pascal way 1 , we put combination in main  function.
// so there are several ways to do . 


// And personally i did the pascal way 1 

#include<stdio.h>
int factorial(int n){
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}
int combination(int i, int j)
{
    int a=factorial(i)/(factorial(j)*factorial(i-j));
    return a;
}

int main()
{
  int fact;
  int s=1;
  for(int i=0;i<=6;i++)
  {
      for(int k=1;k<=7-s;k++)
        {
            printf(" ");
        }
    for(int j=0;j<=i;j++)
    {

        fact=combination(i,j);
        printf("%d  ",fact);
    }
    s++;
    printf("\n");
  }
  
  return 0;

}