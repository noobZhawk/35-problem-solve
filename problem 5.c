#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k,l;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
        if(j>x)
            for(k=x-1;k>=1;k--)
        {
             for(l=1;l<=k;l++)

            printf("*");
        printf("\n");
        }
    }



}

