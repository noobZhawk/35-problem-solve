#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=0;j<=x-i;j++)
            printf("*");
        printf("\n");

    }



}
