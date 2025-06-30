#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Reverse the number using a loop
    while (num > 0) {
        remainder = num % 10;  // Get the last digit
        reversedNum = (reversedNum * 10) + remainder;  // Build the reversed number
        num = num/ 10;  // Remove the last digit from the number
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a Palindrome.\n", originalNum);
    } else {
        printf("%d is not a Palindrome.\n", originalNum);
    }

    return 0;
}
