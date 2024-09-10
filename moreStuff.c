#include <stdio.h>

int main() {
    printf("Hi there! \nWhat's your name? ");
    char name[30];
    scanf("%s", name);
    printf("Hi %s, How old are you? ",name);
    int age;
    scanf("%d",&age);
    return 0;
}