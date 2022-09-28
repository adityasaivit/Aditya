#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    int n;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n>=7)
        {
            a[i-1]=1;
           
        }
        else if(n<7)
        {
            a[i-1]=0;
        }
    }
    for(int j=1;j<=t;j++)
    {
        if(a[j-1]==1)
        {
            printf("no\n");
        }
        else 
        {
            printf("yes\n");
        }
    }
    return 0;
    
}

