//Q22. Write a program using a while loop to print squares of numbers from 1 to 5.

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("Square of %d = %d\n", i, i * i);
        i++;
    }

    return 0;
}
