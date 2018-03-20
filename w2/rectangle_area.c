//Name here
//Program name

#include <stdio.h>

int main(void) {

    int length, width, area;

    printf("Please enter rectangle length: ");
    scanf("%d", &length);

    printf("Please enter rectangle width: ");
    scanf("%d", &width);

    if (length <= 0 || width <= 0) {
        printf("ERROR you suck at maths\n");
    } else {
        area = length * width;
        printf("Area = %d\n", area);
    }

    return 0;
}
