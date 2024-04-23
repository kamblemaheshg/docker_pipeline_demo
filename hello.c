#include <stdio.h>
#include <string.h>

int main(){
    char name[100];

    printf("Enter your name: ");

    scanf("%s",name);

    printf("Hello %s",name);

    printf("\n");
    
    return 0;
}