//by Anna Zhang
//See if you can have a fun time
#include <stdio.h>
#define LEGAL_AGE 18

int main(void) {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age); 
    if (age < LEGAL_AGE) {
        printf("you t00 yung for drinkz\n");
    } else {
        printf("yay you can drink\n");
    }

    return 0;
}
