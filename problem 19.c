#include<stdio.h>

int main(){
    int n,i,j,k=0;
    scanf("%d",&n);

    k = n*2-2;
    for(i=n; i>=1; i--){

        for(j=n; j>=i; j--)
            printf("*");

        for(j=1; j<=k; j++){
            printf(" ",j);
        }

        for(j=n; j>=i; j--)
            printf("*");

        k-=2;
        printf("\n");
    }

        k+=2;
        for(i=1; i<=n; i++){
            if(i==1){
                k+=2;
                continue;
            }

        for(j=n; j>=i; j--)
            printf("*");

        for(j=1; j<=k; j++){
            printf(" ",j);
        }

        for(j=n; j>=i; j--)
            printf("*");

        k+=2;
        printf("\n");
    }

}

