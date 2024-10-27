#include <stdio.h>
#include <math.h>
int main() {
    int num = 153, sum = 0, temp = num, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    printf("%d is %s\n", num, (sum == num) ? "Armstrong" : "Not Armstrong");
    return 0;
}
