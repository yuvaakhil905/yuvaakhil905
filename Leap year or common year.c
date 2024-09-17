#include<stdio.h>
int main(){
    int year;
    printf("Enter any year");
    scanf("%d",&year);
    if (year %4==0)
    {
        printf("It is an leap year");
    }
    else
    {
        printf("It is a common year");
    }
    return 0;
}