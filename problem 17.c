#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k,l;
    int p,q,r,s;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x-i;j++)
            printf(" ");

        for(k=i;k>=1;k--)
            printf("%d",k);

        for(l=2;l<=i;l++)
            printf("%d",l);


        printf("\n");
    }
    if(i>x)
        for(p=1;p<=x-1;p++)
        {
            for(q=1;q<=p;q++)
                printf(" ");
            for(r=x-p;r>=1;r--)
                printf("%d",r);
            for(s=2;s<=x-p;s++)
                printf("%d",s);



            printf("\n");
        }




}
