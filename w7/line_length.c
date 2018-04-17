#include <stdio.h>

int main(void) {

    char input[4096];

    if (fgets(input, 4096, stdin) != NULL) {
        
        int i = 0;

        while (input[i] != '\0' && input[i] != '\n') {
            i++;
        }

        printf("length: %d\n", i);

    } else {
        printf("something died\n");
    }

    return 0;
}
