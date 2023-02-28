#include <stdio.h>

int main(void) {
	int n,x,y;
	int a[1000]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d %d",&x,&y);
	    if(x>y)
	    {
	        a[i-1]=y;
	    }
	    else
	    {
	        a[i-1]=x;
	    }
	}
	for(int j=1;j<=n;j++)
	{
	    printf("%d\n",a[j-1]);
	}
	return 0;
}

