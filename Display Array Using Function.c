#include <stdio.h>

void display(int marks[]);

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    display(marks); // Pass the array to the function
    return 0;
}

void display(int marks[]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\t", marks[i]);
    }
    printf("\n");
}
