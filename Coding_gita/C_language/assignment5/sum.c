//Q7. Write a program using a for loop to print the sum of numbers from 1 to 50.

#include <stdio.h> 
int main() {
    int sum = 0; 

    for (int i = 1; i <= 50; i=i+1) { 
        sum += i; }

    printf("Sum = %d\n", sum); 
    return 0; 
}