#include <stdio.h>
int main() {
    int max = 0;
    for (int i = 1; i <= 5; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);  // Change this according to your needs
        if (num > max) {
            max = num;
        }
    }
    printf("Maximum: %d\n", max);
    return 0;
}
