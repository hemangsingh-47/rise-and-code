// #include <stdio.h>

// int main() {
//     int num, temp, digit, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     temp = num;

//     while (temp > 0) {
//         digit = temp % 10;    
       
//         int fact = 1;
//         for (int i = 1; i <= digit; i++) {
//             fact *= i;
//         }

//         sum += fact;          
//         temp /= 10;            
//     }

//     if (sum == num)
//         printf("%d is a Strong number.\n", num);
//     else
//         printf("%d is not a Strong number.\n", num);



#include <stdio.h>
#include <stdbool.h> // Include this for true/false

int main() {
    int n = 145;
    int r = n;
    int sum = 0;

    while (n > 0) {
        int add = n % 10;
        int check = 1;

        for (int i = add; i > 0; i--) {
            check *= i;
        }

        sum += check;
        n /= 10;
    }

    if (sum == r) {
        printf("%s", "true"); // print string "true"
    } else {
        printf("%s", "false"); // print string "false"
    }

    return 0;
}