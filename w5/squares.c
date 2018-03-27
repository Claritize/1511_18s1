#include <stdio.h>

int main() {

    int squares[15];
    int i = 0;

    while(i < 15) {
        squares[i] = i * i;
        i++;
    }

    i = 0;
    while(i < 15) {
        printf("%d: %d\n",i,  squares[i]);
        i++;
    }


    return 0;
}
