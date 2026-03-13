//Q20. Write a program using a while loop to print the first 5 natural numbers.

#include <stdio.h> // Include standard input-output library

int main() { // Program entry point
    int i = 1; // Initialize counter to 1

    // Loop executes as long as i <= 5
    while (i <= 5) {
        printf("%d\n", i); // Print current value of i
        i++; // Increment i by 1 to move to the next number
    }

    return 0; // Indicate successful program termination
}