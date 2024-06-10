#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char num_str[100];
    int num, sum = 0;

    printf("Welcome to integer summation\n");
    printf("Please enter any number: ");
    scanf("%s", num_str);

    // Check if the input is a valid number
    int is_valid = 1;
    for (int i = 0; i < strlen(num_str); i++) {
        if (!isdigit(num_str[i])) {
            is_valid = 0;
            break;
        }
    }

    if (is_valid) {
        num = atoi(num_str);
        if (num > 0) {
            printf("Digits: ");
            for (int i = 0; i < strlen(num_str); i++) {
                int digit = num_str[i] - '0'; // Convert char to int
                printf("%d ", digit);
                sum += digit;
            }
            printf("\nSum: %d\n", sum);
        } else {
            printf("Sorry, but you can only enter numbers greater than 0.\n");
        }
    } else {
        printf("Please enter a valid number.\n");
    }

    return 0;
}
