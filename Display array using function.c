#include <stdio.h>

void display(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", marks[i]);
    }
    printf("\n");
}

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    display(marks, 5);
    return 0;
}
