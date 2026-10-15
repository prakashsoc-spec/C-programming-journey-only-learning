// write a program to reverse the array without using any extra array

#include<stdio.h>
int main()
{
    int n;
    printf("array element: ");
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<=n-1;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }

    int i=0,j=n-1;
    while (i<j)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    for(int i=0;i<=n-1;i++){
    printf("%d element is %d\n",i+1,a[i]);
    }

    return 0;

}