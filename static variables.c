#include <stdio.h>
void function() {
    static int count = 0; // retains value between function calls
    count++;
    printf("Count: %d\n", count);
}
int main() {
    function();
    function();
    function();
    return 0;
}
