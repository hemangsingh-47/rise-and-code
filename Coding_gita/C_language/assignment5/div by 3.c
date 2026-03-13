//Q11. Write a program using a for loop to print all numbers divisible by 3 from 1 to 30.

#include <stdio.h>

int main() {
    
    for(int i = 1; i <= 30; i++) {
        if(i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
