#include <stdio.h>
int main() {
    int num = 1010, decimal = 0, base = 1;
    while (num) {
        int last_digit = num % 10;
        decimal += last_digit * base;
        base *= 2;
        num /= 10;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
