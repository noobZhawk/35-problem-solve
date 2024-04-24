
#include<stdio.h>
int main()
{
    printf("Input pyramid size:");
    int x,i,j,k;
    scanf("%d",&x);

    for(i=1;i<=x;i++)
        {


        for(j=x-1;j>=i;j--)
            printf(" ");
        for(k=0;k<=i-1;k++)
            printf("* ");

            printf("\n");
        }

}

