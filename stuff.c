#include <stdio.h>
#include <stdbool.h>

int main() {
    int age;
    int currentYear = 2024;
    printf("Hello World \n");
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You were born in %d", currentYear-age);
    return 0;
}