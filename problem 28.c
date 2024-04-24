#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;

    for(i=1;i<=2*x-1;i++)

    if(i<=x)
    {
        for(j=1;j<=x-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");


        printf("\n");
    }
    if(i>=x)
    for(i=1;i<x;i++)
    {

         for(j=1;j<=i;j++)
             printf(" ");

         for(j=1;j<=x-i;j++)
             printf("* ");


        printf("\n");



    }



}
