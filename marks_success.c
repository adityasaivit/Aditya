#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
        int n;char c;
        scanf("%d",&n);
        int a[n];int sum=0;
        for(int i=1;i<=n;i++)
        {
                scanf("%d\n",&a[i-1]);
        }
        scanf("%c",&c);
        if(c=='b')
        {
                for(int j=1;j<=n;j=j+2)
                {
                        sum=sum+a[j-1];
                }
        }
        else if(c=='g')
        {
                for(int k=1;k<n;k=k+2)
                {
                        sum=sum+a[k];
                }
        }
        printf("%d",sum);
        return 0;
}
