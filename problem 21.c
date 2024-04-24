#include<stdio.h>
int main()
{
    int x,y=1;
    int i,j,k;
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2d ",y);
            y++;
        }
        printf("\n");
    }
}
