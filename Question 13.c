#include <stdio.h>

int main() {
    int number;
    long long factorial = 1; // Use long long to handle larger factorials

    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check for negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %lld\n", number, factorial);
    }

    return 0;
}