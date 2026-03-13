//Q16. Write a program using a while loop to calculate the sum of numbers from 1 to 50.

#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    // Loop to add numbers from 1 to 50
    while(i <= 50) {
        sum = sum + i;
        i++;
    }

    // Print the final sum
    printf("The sum of numbers from 1 to 50 is: %d\n", sum);

    return 0;
}
