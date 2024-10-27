#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Left Shift: %d\n", a << 1);
    printf("Right Shift: %d\n", a >> 1);
    return 0;
}
