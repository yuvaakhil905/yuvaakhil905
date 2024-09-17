#include<stdio.h>
int main(){
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    if((ch >='a'&& ch<='z')||(ch >='A' && ch<='z'))
    {
        printf("Character is alphabet");
    }
    else
    {
       printf("Character is not alphabet");
    }
    return 0;
}