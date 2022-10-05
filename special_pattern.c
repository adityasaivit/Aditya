#include <stdio.h>
int main()
        {
             int n;int a=1;
             scanf("%d",&n);
             int m=n;int b=2*n-1;
             int e=n-1;int f=n+1;int p=2;
             for(int i=1;i<=n;i++)
             {
                     for(int j=1;j<=2*n-1;j++)
                     {
                             if((j>=a)&(j<=b))
                             {
                                     printf("%d ",m);
                             }
                             else if(j<n)
                             {
                                     printf("%d ",n-(j-1));
                             }
                             else 
                             {
                                int x=(2*n-1)-j;
                                printf("%d ",n-x);
                             }
                             
                     }
                     printf("\n");
                     a++;b--;m--;
             }
               
               
               for(int k=1;k<=n-1;k++)
               {
                       for(int l=1;l<=2*n-1;l++)
                       {
                               if((l>=e)&(l<=f))
                               {
                                       printf("%d ",p);
                               }
                               else if(l<n)
                               {
                                       printf("%d ",n-(l-1));
                               }
                               else 
                               {
                                       int o=(2*n-1)-l;
                                       printf("%d ",n-o);
                               }
                               
                       }
                       p++;e--;f++;
                       printf("\n");
               } 
               return 0;
        }
