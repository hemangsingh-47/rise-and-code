//Q19. Write a program using a while loop to calculate the factorial of a given number.
#include <stdio.h>

int main() {
    int n, fact = 1; // Declare n (input number) and fact (result)
    int i = 1; // Counter starts from 1

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop to multiply numbers from 1 to n
    while (i <= n) {
        fact *= i; // Multiply fact by current i
        i++; // Increment counter
    }

    printf("Factorial of %d = %d\n", n, fact);
    return 0;
}