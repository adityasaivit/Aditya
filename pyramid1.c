#include<stdio.h>
int main()
{
    int a=1;int b=11;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=11;j++)
        {
            if((j<=a)||(j>=b))
            {
            
                printf("*");
            }
            else 
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        a=a+2;b=b-2;
        
    }
    return 0;
}
