#include <stdio.h>
int main() {
    int a = 5;
    a += 3; 
    printf("Addition Assignment: %d\n", a);
    a -= 2; 
    printf("Subtraction Assignment: %d\n", a);
    a *= 2; 
    printf("Multiplication Assignment: %d\n", a);
    a /= 4; 
    printf("Division Assignment: %d\n", a);
    return 0;
}
