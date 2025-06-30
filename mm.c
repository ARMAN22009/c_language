#include <stdio.h>

void printPascal(int rows) {
    int arr[rows][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            // First and last element of each row is 1
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                // Sum of the two numbers above
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printPascal(rows);
    return 0;
}
