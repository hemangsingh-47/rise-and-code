//Q13. Write a program using a while loop to print numbers from 1 to 10.


#include <stdio.h> // Include standard input-output library

int main() { // Program entry point
    float i = 1; // Initialize counter to 1

    // Loop executes as long as i <= 5
    while (i <= 10) {
        printf("%f\n", i); // Print current value of i
        i++; // Increment i by 1 to move to the next number
    }

    return 0; // Indicate successful program termination
}

