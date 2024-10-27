#include <stdio.h>
#include <math.h>
int main() {
    float principal = 1000, rate = 5, time = 2;
    float amount = principal * pow((1 + rate / 100), time);
    printf("Compound Amount: %.2f\n", amount);
    return 0;
}
