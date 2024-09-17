#include<stdio.h>
#include<math.h>
int main(){
int discriminant;
float a,b,c;
printf("Enter coefficents of a,b,c:");
scanf("%f %f %f",&a,&b,&c);
discriminant = (b * b) - (4 * a * c);
if (discriminant > 0)
{
    printf("\n The equation has real roots");
    printf("points=20");
}
else if(discriminant=0)
{
    printf("\n The equations has equal roots");
    printf("points=0");
}
 else
{
    printf("The equation has imiginary roots\n");
    printf("points=10");
}
    return 0;
}