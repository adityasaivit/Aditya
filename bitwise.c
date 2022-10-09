#include<stdio.h>
int main()
{
    int c,d;
    scanf("%d\n",&c);
    scanf("%d",&d);
    unsigned char a,b;
    a=c;b=d;
    
     int e;int f,g;int or=0;int and=0;int xor=0;
    for(int i=1;i<a;i++)
    {
        for(int j=i;j<b;j++)
        {
            int e=i&j;
            if(and<e)
            {
                and=e;
            }
            int f=i|j;
            if(or<f)
            {
                or=f;
            }
            int g=i^j;
            if(xor<g)
            {
                xor=g;
            }
        }
    }
    printf("%d\n",and);
    printf("%d\n",or);
    printf("%d",xor);
    
    return 0;
}
