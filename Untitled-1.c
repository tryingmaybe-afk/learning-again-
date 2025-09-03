#include <stdio.h>

int main() {
    char name[10];
    int age;
    char lastname[10];
    float height;

    printf("Enter Your Name:\n");
    scanf("%9s", name);  // limit input to 9 chars
    printf("Enter Your Last Name:\n");
    scanf("%9s", lastname);
    printf("Enter Your Age:\n");
    scanf("%d", &age);
    printf("Enter Your Height:\n");
    scanf("%f", &height);

    if(name[0] == 'A' || name[0] == 'B' || name[0] == 'C') {
        printf("You are in the First class\n");
    } else {
        printf("You are not in the First class\n");
    }

    return 0;
}
