#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x-i;j++)
            printf(" ");

            printf("*");


        for(j=3;j<=2*i-1;j++)
            printf(" ");
        if(j>3)
            printf("*");



        for(j=1;j<=2*(x-i)-1;j++)
            printf(" ");
        if(i<x)
            printf("*");



        for(j=3;j<=2*i-1;j++)
            printf(" ");
        if(j>3)
            printf("*");


       printf("\n");



    }



}











//hrithik-23111106
