//Q5. Write a program using a for loop to print the multiplication table of a given number.
#include <stdio.h>

int main() {
    int num,i; 
    printf("Enter a number: "); 
    scanf("%d", &num); 

    for (int i = 1; i <= 10; i++) { 
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
