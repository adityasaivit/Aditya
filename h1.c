#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000]={0};
    int x;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        a[i-1]=x;
    }
    char c;
    int sum=0;
    scanf("%c",&c);
    if(c=='b')
    {
        for(int j=0;j<n;j=j+2)
        {
            sum=sum+a[j];
        }

    }
    else if(c=='g')
    {
        for(int k=1;k<n;k++)
        {
            sum=sum+a[k];
        }

    }
    printf("%d",sum);
    return 0;
}