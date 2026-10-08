//                1
//              1   1
//            1   2   1
//          1   3   3   1
//        1   4   6   4   1
//      1   5  10  10   5   1
//    1   6  15  20  15   6   1

// if we look carefully then, each element has some relation to combination of different pattern.
// pattern starting from 0 to 6. 
// so we did function recall in for loop and print combination value.
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

        fact=factorial(i)/(factorial(j)*factorial(i-j));
        printf("%d  ",fact);
    }
    s++;
    printf("\n");
  }
  
  return 0;

}