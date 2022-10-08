#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];int sum=0;int b;
    fgets(s,sizeof(s),stdin);
    int a=strlen(s);int x[100];
    int y=0;
    printf("\n");
    for(int i=1;i<=a;i++)
    {
        b=isspace(s[i-1]);
        if(b==0)
        {
            sum=sum+1;
            
        }
        else
        {
            x[y]=i-1;
            y++;
            
        }
        
    }
    for(int l=0;l<=x[0];l++)
    {
        printf("%c",s[l]);
    }
    printf("\n");
    
    int e=0;int f=1;
    for(int j=1;j<=(a-1)-sum;j++)
    {
        for(int k=x[e]+1;k<x[f];k++)
        {
            printf("%C",s[k]);
        }
        printf("\n");
        e++;f++;
    }
    
    
}
