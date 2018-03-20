#include <stdio.h>

int main(void) {
    int number;
    int row, column;
    int underscores;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);

    underscores = number - 1;

    row = 1;
    while (row <= number) {
        column = 1;
        while (column <= number) {
            if (column <= underscores) {
                printf("_");
            } else {
                printf("*");
            }

            column = column + 1;
        }
        underscores--;
        printf("\n");
        row = row + 1;
    }

    return 0;
}
