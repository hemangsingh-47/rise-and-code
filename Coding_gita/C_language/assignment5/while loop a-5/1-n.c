//Q21. Write a program using a while loop to print numbers from 1 to a given number entered by the user.

#include <stdio.h>

int main() {
    int n, i = 1;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
