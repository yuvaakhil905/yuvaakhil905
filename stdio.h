#include <stdio.h>
int main()
{int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
if (a>b)
printf("\n The maximum number is: %d",a);
else if (b>a)
printf("\n The maximum number is: %d",b);
else
printf("\n Both numbers are equal.");
return 0;
}
 