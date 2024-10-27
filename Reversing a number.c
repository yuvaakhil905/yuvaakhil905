#include <stdio.h>
int main() {
    int num = 1234, reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed: %d\n", reversed);
    return 0;
}
