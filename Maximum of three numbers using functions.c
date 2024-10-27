#include <stdio.h>
int findMaximum(int a, int b, int c) {
    if (a >= b && a >= c) return a; 
    if (b >= a && b >= c) return b; 
    return c; 
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int maximum = findMaximum(num1, num2, num3);
    printf("The maximum is: %d\n", maximum);

    return 0;
}
