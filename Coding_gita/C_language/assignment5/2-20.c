//Q2. Write a program using a for loop to print even numbers from 2 to 20.
#include <stdio.h>

int main() {
    for (int i = 2; i <= 20; i += 2) { // Start from 2, increment by 2 each time
        printf("%d\n ", i); // Print even number followed by a space
    }
     // Move to next line after loop finishes
    return 0;
}
