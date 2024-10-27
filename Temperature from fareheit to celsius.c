#include <stdio.h>
int main() {
    float fahrenheit = 100;
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("Celsius: %.2f\n", celsius);
    return 0;
}
