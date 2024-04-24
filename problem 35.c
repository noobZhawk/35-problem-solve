 #include<stdio.h>
 int main()
 {
     int x;
     scanf("%d",&x);
     int i,j ,k,l;
     for(i=1;i<=x;i++)
     {
         for(j=1;j<=i;j++)
            printf("%d",j);
         for(k=1;k<=2*(x-i);k++)
            printf(" ");
         for(l=i;l>=1;l--)
            printf("%d",l);

         printf("\n");
     }
 }
