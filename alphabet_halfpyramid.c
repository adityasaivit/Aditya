#include<stdio.h>
int main()
{
    char s[5]="ABCDE";int a=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",s[a]);
        }
        printf("\n");
        a++;
    }
}
