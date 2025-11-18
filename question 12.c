#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    // Read the integer input from the user
    scanf("%d", &n);

    // Check if the entered number is positive
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Loop from 1 to n, adding each number to the sum
    for (i = 1; i <= n; ++i) {
        sum += i; // Equivalent to sum = sum + i;
    }

    // Print the calculated sum
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0; // Indicate successful execution
}