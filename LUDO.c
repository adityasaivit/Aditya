#include <stdio.h>
int main()
{
    int n,m;
    int arr[1000]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&m);
        arr[i-1]=m;
    }
    for(int j=1;j<=n;j++)
    {
        if(arr[j-1]==6)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}