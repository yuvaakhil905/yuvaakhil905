#include <stdio.h>
int main() {
    int num = 29, isPrime = 1;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    printf("%d is %s\n", num, isPrime ? "Prime" : "Not Prime");
    return 0;
}
