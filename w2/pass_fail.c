//Anna (z11111)
//pass_fail.c

#include <stdio.h>

int main(void) {

    int mark = -1;
    printf("Please enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 49) {
        printf("FAIL\n");
    } else if (mark >= 50 && mark <= 100) {
        printf("PASS\n");
    } else {
        printf("ERROR\n");
    }
    
    return 0;

}
