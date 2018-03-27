#include <stdio.h>

int find_int(int n_array[], int n_size, int some_int) {

    int i = 0;

    while (i < n_size) {
        if (n_array[i] == some_int) {
            return 0;
        }
        i++;
    }

    return 1;

}

int main() {

    int array[3] = {1,2,3};

    int success = find_int(array, 3, 2);
    printf("%d\n", success);

    return 1;
}
