#include <stdio.h>
void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
}
int main() {
    checkEvenOdd(5);
    checkEvenOdd(10);
    return 0;
}
