#include <stdio.h>

int main() {
    int n;

    // Taking input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    //  Printing the triangle using two loops
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= i; j++) {  
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
    
