#include <stdio.h>
int main() {
    float principal = 1000, rate = 5, time = 2;
    float interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}
