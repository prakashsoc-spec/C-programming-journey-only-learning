#include<Stdio.h>
int main()
{
    int a,s,d;
    printf("enter age of ram, shyam,ajay: ");
    scanf("%d%d%d",&a,&s,&d);

    if(a<s)
    {
        if(a<d)
        {
            printf("Ram is youngest of them all");
        }
        else
        {
            printf("Ajay is youngest of them all");
        }
    }
    else // s is smaller case
    {
        if(s<d)
        {
            printf("Shyam is youngest of them all");
        }
        else
        {
            printf("Ajay is youngest of them all");
        }

    }


}
