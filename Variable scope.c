#include <stdio.h>
void function() {
    int x = 10; // local variable
    printf("Inside function: %d\n", x);
}
int main() {
    function();
    return 0;
}
