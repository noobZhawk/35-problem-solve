#include<stdio.h>
int main()
{
    int x;
    int i,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=0;j<=x-i;j++)
            printf("%d ",i);
        printf("\n");
    }

}
