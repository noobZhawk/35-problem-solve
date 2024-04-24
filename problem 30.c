#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k,l;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x-i;j++)
            printf("  ");

        for(k=i;k>=1;k--)
            printf("%2d",k);

        for(l=2;l<=i;l++)
            printf("%2d",l);


        printf("\n");
    }




}
