#include <stdio.h>

int find_factorial(int n);

int main() {
    int num, fact;
    printf("\nEnter any integer number: ");
    scanf("%d", &num);
    fact = find_factorial(num);
    printf("\nFactorial of %d is: %d\n", num, fact);
    return 0;
}

int find_factorial(int n) {
    if (n == 0)
        return 1;
    return n * find_factorial(n - 1);
} 
