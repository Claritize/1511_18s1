#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", &n);
    int counter = 0;

    while (n > 0) {
        n = n/10;
        counter++;
    }
    counter--; 
    printf("it is %d\n", counter);
    return 0;
}
