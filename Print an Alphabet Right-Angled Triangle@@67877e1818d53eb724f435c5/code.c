#include <stdio.h>
int main(){
    int a,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}