// From this program we can see that , memory allocation in array is continuous.
// meaning it get arranged side by side 
// and each element is differ by 4 bytes 
// so array is very fast
// we represent the address of array by a[0]

#include<stdio.h>
int main()
{
    int a[3]={2,1,2},i;
    for(i=0;i<=2;i++)
    {
        printf("%p\n",&a[i]);
    }
}