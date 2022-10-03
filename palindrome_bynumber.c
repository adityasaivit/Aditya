#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];int sum=0;
    gets(s);
    int a=strlen(s);
    for(int i=1;i<=a;i++)
    {
        if(s[i-1]==s[a-i]);
        {
            sum=sum+1;
        }
    }
    if(a%2==0)
    {
        if(sum==a)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    if(a%2==1)
    {
        if(sum=a+1)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    return 0;

}
