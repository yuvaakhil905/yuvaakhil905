#include <stdio.h>
int main() {
    int a = 4, b = 6;
    int lcm = (a * b) / gcd(a, b); // assuming gcd() is defined
    printf("LCM: %d\n", lcm);
    return 0;
}
