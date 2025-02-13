#include <stdio.h>

int main() {
    int number,n;

    scanf("%d %d", &number,&n);
    if(number>n){
        printf("%d",number);
    }
    else{
        printf("%d",n);
    }

    return 0;
}