#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,y;
	int a[1000]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d %d",&x,&y);
	    a[i-1]=((x/10)*y);
	}
	for(int j=1;j<=n;j++)
	{
	    printf("%d\n",a[j-1]);
	}
	return 0;
}

