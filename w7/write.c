#include <stdio.h>

int main(void) {

    char input[100];
    fgets(input, 100, stdin);

    FILE *fp = fopen("data.txt", "w");

    if (fp != NULL) {
        fprintf(fp, "%s", input);
    }

    fclose(fp);

    return 0;
}
