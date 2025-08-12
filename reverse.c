#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;              // Get last digit
        reversed = reversed * 10 + remainder; // Append to reversed number
        num = num / 10;                    // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
