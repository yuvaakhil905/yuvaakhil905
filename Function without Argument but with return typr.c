#include <stdio.h>

int addWithoutArgWithReturn() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

int main() {
    int sum = addWithoutArgWithReturn();
    printf("Sum: %d\n", sum);
    return 0;
}
