#include <stdio.h>

float findAverage(int marks[], int n);
void printArray(int marks[], int n);

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    printArray(marks, 5);
    return 0;
}

void printArray(int marks[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", marks[i]);
    }
    printf("\n");
    float avg = findAverage(marks, n);
    printf("Average marks = %.1f\n", avg);
}

float findAverage(int marks[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return sum / n;
}
