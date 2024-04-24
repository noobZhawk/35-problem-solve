#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k,l ;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i-1;j++)
            printf(" ");
        for(j=0;j<=x-i;j++)
            printf("* ");


        printf("\n");

    }
     if(i==x+1)
    {


        for(k=1;k<=x;k++)
        {
            for(l=1;l<=x-k;l++)
                printf(" ");

            for(l=1;l<=k;l++)
                printf("* ");


            printf("\n");
        }

    }

}
