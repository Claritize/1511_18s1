#include <stdio.h>

int main(void) {

    FILE *fp = fopen("data.txt", "r");

    char input[100];

    if (fp != NULL) {
        fgets(input, 100, fp);
        printf("%s", input);
    }

    return 0;
}
