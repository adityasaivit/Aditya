#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x;
	scanf("%d",&n);
	int a[1000]={0};
	for(int i=1;i<=n;i++)
	{
	    scanf("%d",&x);
	    if(x>100)
	    {
	        a[i-1]=x-10;
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

