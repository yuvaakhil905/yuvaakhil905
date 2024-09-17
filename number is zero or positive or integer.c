#include<stdio.h>
int main()
{int num;
printf("Enter a number:");
scanf("%d",num );
if(num>0)
printf("Number is positive");
if(num<0)
printf("Number is integer");
if(num==0)
printf("Number is zero");
return 0;
}