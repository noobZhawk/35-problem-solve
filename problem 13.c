#include<stdio.h>
int main()
{
    int x;
    int i,j,k,l,m=1;

    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
     {
        for(j=x-i;j>=1;j--)
         {
             printf(" ");
         }
            if(i<x)
                printf("*");

               {
                   if((i>=2)&&(i<x))
                    for(k=3;k<=m ;k++)
                    printf(" ");

                    m=m+2;
               }

               {
                   if((i>=2)&&(i<x))
                       printf("*");

               }

            if(i<x)
             printf("\n");

    }
      if(i==x)
        for(l=1;l<=2*x-1;l++)
          printf("*");
    }
}
