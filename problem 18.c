#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    int i,j,k;
    for(i=0;i<2*x;i++)

    if(i<x)
    {
        for(j=1;j<=x-i;j++)
            printf("*");
        for(j=1;j<=2*i;j++)
            printf(" ");
         for(j=1;j<=x-i;j++)
            printf("*");

            printf("\n");
    }

    else
    {
        for(j=0;j<=i-x;j++)
           printf("*");
        for(k=1;k<=(x-j)*2;k++)
            printf(" ");
        for(j=0;j<=i-x;j++)
           printf("*");


         printf("\n");
    }

}
