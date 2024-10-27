#include <stdio.h>
int multiply(int a, int b) {
    if (b == 0) return 0;
    return a + multiply(a, b - 1);
}
int main() {
    printf("Product: %d\n", multiply(5, 3));
    return 0;
}
