// given a array of marks of 10 student, if the mark of any student 
// less than 35 print its roll number.(roll number here refers to the 
// index of the array).

#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<=9;i++)
    {
        printf("Enter the %d student number ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        if(a[i]<35)
        {
            printf("%d student is failed\n",i+1);
        }
        else
        {
            printf(" %d student is passed\n",i+1);
        }
    }
}