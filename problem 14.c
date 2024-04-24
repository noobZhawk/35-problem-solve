#include<stdio.h>
int main()
{

    int x;
    int i,j,k,l,m;

    scanf("%d",&x);
       for(i=1;i<=x;i++)
       {

         {
             if(i==1)
               {for(j=1;j<=2*x-1;j++)
                    printf("*");

                    printf("\n");
               }
         }

         {
             if(i<x)
               for(k=1;k<=i;k++)
                 printf(" ");
         }
                if((i>=1)&&(i<=x-1))
                  printf("*");


                if((i>=1)&&(i<=x-1))
{
                  m=(x-i)*2-1;
                  for(l=3;l<=m;l++)
                   {
                       printf(" ");

                   }
                   if(i<x-1)
                   printf("*");
}





                  if(i<x-1)
                     printf("\n");


         {


         }




       }







}
