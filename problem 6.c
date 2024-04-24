#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k;
    for(i=1;i<=x;i++)
    {

        for(j=x-i;j>=1;j--)
            printf(" ");

            for(k=1;k<=i;k++)
                printf("*");




            printf("\n");

    }

}
