#include<stdio.h>
int main()
{
    int a=1;int b=6;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if((j>=a)&(j<a+1))
            {
                for(int k=1;k<=10;k++)
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");a++;
        
    }
    for(int l=1;l<=5;l++)
    {
        for(int m=1;m<=6;m++)
        {
            if((m<=b)&(m>b-1))
            {
                for(int x=1;x<=10;x++)
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");b--;
    }
}
