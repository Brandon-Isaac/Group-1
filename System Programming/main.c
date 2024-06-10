#include <stdio.h>
#include <math.h>

// Entry point of the program
int main(int argc, char *argv[])  // Changed return type to int (standard for main function)
{
    int n, i;
    int d2, count;
    double d1;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);  // Read an integer from the user

        if (n == 0)
            break;  // Exit the loop if the user enters 0

        count = 0;  // Reset the count for each number

        // Loop from 1 to n (i = 1 to i < n)
        for (i = 1; i < n; i++) {  // Changed i > n to i < n
            d1 = (double)n / (double)i;  // Calculate the division as a double
            d2 = n / i;  // Calculate the integer division

            // Check if the floating-point result is almost equal to the integer result
            if (fabs(d1 - (double)d2) < 0.00001)
                count++;
        }

        // Check if the count of divisors is exactly 1 (excluding 1 and n itself)
        if (count == 1)  // Changed from 2 to 1 (1 because we are counting excluding 1 and the number itself)
            printf("%d is prime\n", n);  // Print if the number is prime
        else
            printf("%d is not prime\n", n);  // Print if the number is not prime
    }

    return 0;  // Return 0 to indicate successful completion
}
