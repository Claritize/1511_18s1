#include <stdio.h>

int main(void) {

    int sum = 0, num_char = 0;

    char c = getchar();
    while(c != EOF) {
        
        if(c >= '0' && c <= '9') {
            int num = c - '0';
            sum += num;
            num_char++;
        }

        c = getchar();
    }

    printf("%d sum, %d values\n", sum, num_char);

    return 0;
}
