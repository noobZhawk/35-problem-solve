#include<stdio.h>

int main(){
    int n,i,j,k=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++) {
                k++;

         if(k%2==0)
             printf("%c ",k+64);
         else
             printf("%c ",k+96);

        }
        printf("\n");
    }

}

