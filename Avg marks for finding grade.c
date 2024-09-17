#include <stdio.h>

int main() {
    float avgMarks;
    printf("Enter the average marks: ");
    scanf("%f", &avgMarks);
    if (avgMarks > 80) {
        printf("Grade: A\n");
    } else if (avgMarks > 60 && avgMarks <= 80) {
        printf("Grade: B\n");
    } else if (avgMarks > 40 && avgMarks <= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
