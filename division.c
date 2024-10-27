#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b==0){
        printf("\n infinity");
    }else{
        printf("\n %d",a/b);
    }
    printf("%d\n", a / b);
    return 0;
}
