#include <stdio.h>

int main() {
    int r = 4;
    const int index = r;
    int array[5] = {0, 1, 2, 3, 4};
    printf("Hello, World! %d\n", array[index]);
    return 0;
}
