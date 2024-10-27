#include <stdio.h>
void printAbsoluteValue(int x) {
    if (x < 0) {
        x = -x; 
    }
    printf("The absolute value is: %d\n", x);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printAbsoluteValue(num);

    return 0;
}
