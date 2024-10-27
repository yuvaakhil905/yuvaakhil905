#include <stdio.h>

void printSum(int sum, int count);
int countElements(int n);
int sumArray(int arr[], int n);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = sumArray(arr, n);
    printSum(totalSum, countElements(n));
    return 0;
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void printSum(int sum, int count) {
    printf("Total Sum: %d\n", sum);
    printf("Number of elements: %d\n", count);
}

int countElements(int n) {
    return n;
}
