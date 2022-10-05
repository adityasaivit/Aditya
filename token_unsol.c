#include<stdio.h>
#include<string.h>
int main()
{
        char s[100];
        scanf("%s",&s);
        int a=strlen(s);
        int b[a];int j=0;int sum=0;
        for(int i=1;i<=a;i++)
        {
            if(isspace(s[i-1])==1)
            { 
                        b[j]=i;
                        sum=sum+1;
                        j++;
                        
                 }
        }
        printf("%d",sum);
        int x=b[0];
        int y=1;
        for(int k=1;k<=sum+1;k++)
        {
                for(int l=y;l<=x;l++)
                {
                        printf("%c",b[l-1]);
                }
                printf("\n");
                y=b[sum-1];y=b[sum];
        }
        return 0;
        
}
