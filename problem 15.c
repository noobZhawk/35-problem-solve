#include<stdio.h>
int main()
{
    int x,y=1;
    scanf("%d",&x);
    int i,j,k,l,m,n;
    for(i=1;i<=x;i++)
    {
       for(j=1;j<=x-i;j++)
        printf(" ");

        printf("*");


            if((i>=2)&&(i<=x))
                 for(k=3;k<=y;k++)

                      printf(" ");

                      y=y+2;

                  if((i>1)&&(i<=x))
                      printf("*");


          printf("\n");
    }
    if(i>x)
    {



        for(l=1;l<=x-1;l++)
        {
             y=y-2;

            for(m=1;m<=l;m++)
                printf(" ");
                printf("*");

                for(n=3;n<=y-2;n++)
                    printf(" ");

                    if((l>=1)&&(l<x-1))
                        printf("*");





            printf("\n");
        }
    }

}
