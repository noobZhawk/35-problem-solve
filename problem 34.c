#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);



    int i,j;
    for(i=1;i<=x;i++)
    {
        char y='A'+x-i;

        for(j=x;j>=i;j--)
            {
                printf("%c ",y );

                y--;
            }

            printf("\n");

    }
}

