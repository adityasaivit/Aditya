#include <stdio.h>

int main(void) {
	int n,m;
	int arr[100]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d",&m);
	    arr[i-1]=10*m;
	    
	}
	for(int j=1;j<=n;j++)
	{
	    printf("%d\n",arr[j-1]);
	}
	return 0;
}

