#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the coefficient of x^2:");
    scanf("%d",&a);
    printf("\n");
    printf("enter the coefficient of x:");
    scanf("%d",&b);
    printf("\n");
    printf("enter the constant");
    scanf("%d",&c);
    b=b-2*b;
    float d=b*b-4*a*c;
    float D=sqrt(d);
    
    
    
    if(d>=0)
    {
        float r1,r2;
        printf("they had real roots \n");
        r1=(b+D)/2*a;
        r2=(b-d)/2*a;
        printf("the first root was %f",r1);
        printf("the second root was %D",r2);
        
    }
    else
    {
        printf("it has imaginary roots");
    }

return 0;
    

    
    
}