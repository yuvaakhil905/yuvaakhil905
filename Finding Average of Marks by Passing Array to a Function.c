#include <stdio.h>

float findAverage(int marks[], int n);

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    printf("Average marks = %.1f\n", findAverage(marks, 5));
    return 0;
}

float findAverage(int marks[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return sum / n;
}
