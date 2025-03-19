#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int nsp = n-1;
    int nn = 1;
    for(i=1;i<=n;i++){
        for(k=1;k<=nsp;k++){
            printf(" ");
        }
        nsp = nsp - 1;
        for(j=1;j<=nn;j++){
            printf("%d ",j);
        }
        nn = nn + 1;
        printf("\n");
    }
    return 0;
}