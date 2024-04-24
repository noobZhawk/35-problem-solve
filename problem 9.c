#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k=0;
    for(i=0;i<x;i++)
    {

        for(j=1;j<=i;j++)
        printf(" ");

        for(k=2*x-j;k>i;k--)
             printf("*");





        printf("\n");

    }

}

