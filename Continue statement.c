#include <stdio.h>
int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
