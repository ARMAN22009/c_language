#include <stdio.h>
#include <math.h> // For power calculations

int main() {
    int n;
    long long sum = 0; // Using long long to handle large numbers

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += i; // Add i+i
    }
printf("sum is %d",sum);


    return 0;
}