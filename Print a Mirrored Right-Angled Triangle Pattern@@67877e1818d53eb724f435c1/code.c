#include <stdio.h>
int main(){
    int n,i,j,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(space=n;space>i;--space){
            printf(" ");
        }
        for (j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}