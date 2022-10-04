#include<stdio.h>
int main()
{
    int a=3;int b=3;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if((j>=a)&(j<=b))
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        } 
        a--;b++;
        printf("\n");
    }
}
