#include <stdio.h>

int findMax(int arr[], int n);

int main() {
    int arr[5] = {12, 45, 23, 67, 34};
    printf("Maximum element: %d\n", findMax(arr, 5));
    return 0;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
