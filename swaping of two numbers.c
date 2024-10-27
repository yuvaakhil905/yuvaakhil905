#include <stdio.h>

void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;   
    *b = temp; 
    printf("Inside swapByReference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Before swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapByReference: x = %d, y = %d\n", x, y); 

    return 0;
}
