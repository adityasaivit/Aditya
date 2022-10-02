#include<stdio.h>
int main()
{
    printf("enter the number:");
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            sum=sum+1;
        }
    }
    if(sum==2)
    {
        printf("entered number was prinme number");
        
    }
    else
    {
        printf("entered number was not a prime num");
    }
}
