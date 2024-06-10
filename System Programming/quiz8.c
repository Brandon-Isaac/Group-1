#include <stdio.h>
#include <math.h>

// Function to find the closest perfect square to the given number
int closestPerfectSquare(int num) {
    int sqrt_floor = (int) sqrt(num);
    int sqrt_ceil = sqrt_floor + 1;
    
    int lower_square = sqrt_floor * sqrt_floor;
    int upper_square = sqrt_ceil * sqrt_ceil;
    
    if (num - lower_square <= upper_square - num) {
        return lower_square;
    } else {
        return upper_square;
    }
}

int main() {
    int num;
    
    // Prompting user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Validating input
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    // Finding and printing the closest perfect square
    int closest_square = closestPerfectSquare(num);
    printf("The closest integer with a whole number square root is: %d\n", closest_square);
    
    return 0;
}