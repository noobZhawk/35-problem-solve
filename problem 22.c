#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
            if(((i%2==1)&&(j%2==1))||((i%2==0)&&(j%2==0)))
               printf("1 ");
            else
                printf("0 ");


            printf("\n");
    }
}
