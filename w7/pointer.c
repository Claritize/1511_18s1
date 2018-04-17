#include <stdio.h>

void add_two(int *num1, int *num2, int *res);
int main(void) {

    int num1 = 2, num2 = 4, num3 = 0;

    add_two(&num1, &num2, &num3);

    printf("%d\n", num3);

    return 0;
}
void add_two(int *num1, int *num2, int *res) {

    *res = *num1 + *num2;
}
