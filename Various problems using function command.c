#include <stdio.h>
void evenOdd(int x) {
    if (x % 2 == 0) {
        printf("%d is even.\n", x);
    } else {
        printf("%d is odd.\n", x);
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    evenOdd(num);

    return 0;
}
