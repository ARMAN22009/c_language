#include <stdio.h>

int main() {
    int i, j, n = 5;  // n is the number of rows

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for printing numbers
        for (j = i; j < i + i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }
 
    return 0;
}
