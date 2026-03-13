//Q9. Write a program using a for loop to print all multiples of 5 between 1 and 50.

#include <stdio.h>

int main() {
    
    for(int i = 1; i < 50; i++) {
        if(i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
