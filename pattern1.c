#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=i-1;
        for(int j=1;j<=5-k;j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    return 0;
}
