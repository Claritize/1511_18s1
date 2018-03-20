#include <stdio.h>

int main(void) {

    printf("Enter your height: ");
    int height, height_feet;
    scanf("%d", &height);

    height_feet = (height / 2.54) / 12;

    printf("Your height in feet is %d", height_feet);

    return 0;

}
