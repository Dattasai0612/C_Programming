#include <stdio.h>

int main() {
    int value = 42;
    int *ptr = &value;
    int **ptr2 = &ptr;

    printf("Value: %d\n", value);
    printf("Value using ptr: %d\n", *ptr);
    printf("Value using ptr2: %d\n", **ptr2);

    return 0;
}
