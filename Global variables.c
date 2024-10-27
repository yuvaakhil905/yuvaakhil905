#include <stdio.h>
int x = 20; // global variable
void function() {
    printf("Global x: %d\n", x);
}
int main() {
    function();
    return 0;
}
