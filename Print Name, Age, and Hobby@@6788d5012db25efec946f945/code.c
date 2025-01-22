#include <stdio.h>
int main() {
    char name[100];
    int age;
    char hby[100];
    scanf("%s %d",&name,&age);
    scanf("%s",&hby);
    printf("Name: %s \nAge: %d \nHobby: %s",name,age,hby);
    
    return 0;
}