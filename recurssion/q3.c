#include <stdio.h>

// Step 1: Declare a recursive function
double power(double base, int exponent) {
    // Step 4: If exponent is 0, return 1
    if (exponent == 0)
        return 1;

    // Step 5: If exponent is positive
    else if (exponent > 0)
        return base * power(base, exponent - 1);

    // Step 6: If exponent is negative
    else
        return 1 / power(base, -exponent);
}

int main() {
    double base, result;
    int exponent;

    // Step 2: Take user input
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Step 3: Call recursive function
    result = power(base, exponent);

    // Step 7: Print result
    printf("%.2lf raised to the power %d is %.4lf\n", base, exponent, result);

    return 0;
}
