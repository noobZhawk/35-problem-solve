#include<stdio.h>
int main()
{
    int x,pas=1;
    scanf("%d",&x);
    int i,j,k;
    for(i=0;i<=x-1;i++)
    {
        for(j=1;j<=x-i;j++)
            printf("  ");


        for(k=0;k<=i;k++)

           {

           if((k==0)||(k==i))
                pas=1;
            else
                pas=pas*(i-k+1)/k;

                printf("%4d",pas);

           }


        printf("\n");
    }
}
