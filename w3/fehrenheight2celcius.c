#include <stdio.h>

int main(void) {

    printf("Temp in C.: ");
    double celsius;
    scanf("%lf", &celsius);
    double fahrenheit = (celsius * (9/5)) + 32;

    printf("In fahrenheit it is %lf\n", fahrenheit);

    return 0;
}
