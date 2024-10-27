#include <stdio.h>
#include <math.h>

int factorial(int n);
float sumofseries(int x, int n);

int main() // Change void main() to int main()
{
    int n, x;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Enter digit: ");
    scanf("%d", &x);
    printf("\nSum of series: %.2f\n", sumofseries(x, n)); // Corrected format specifier
    return 0; // Return 0 at the end of main
}

int factorial(int n)
{
    if (n == 0) // Handle 0! case
        return 1;

    int z = 1;
    for (int i = 1; i <= n; i++) // Start loop from 1 to n
    {
        z *= i; // Calculate factorial
    }
    return z;
}

float sumofseries(int x, int n)
{
    float sum = 1.00; // Start with the 0th term (1)
    for (int i = 1; i < n; i++) // Start from 1 to calculate the series
    {
        sum += (pow(x, i) / factorial(i)); // Calculate the sum of the series
    }
    return sum;
}
