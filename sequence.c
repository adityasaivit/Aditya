#include<stdio.h>
int main()
{
    int x=0;int n=0;int sum=0;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++)
    {
        if((i-1)%2==0)
        {
            sum=sum+x^(i-1);
        }
        else
        {
            sum=sum-x^(i-1);
        }
    }
    printf("%d",sum);
}
