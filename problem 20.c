#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k,l;
    for(i=1;i<=x;i++)
      {
          for(j=1;j<=x-1;j++)
            {
                if((i==1)||(i==x))
                 printf("*");

            }
            printf("\n");

            if((i>=1)&&(i<x-1))
            {
                printf("*");

                for(k=1;k<=x-3;k++)
                    printf(" ");

                printf("*");
            }
      }

}
