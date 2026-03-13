//  #include<stdio.h>
//  int main(){

//     char var = 'a';
//     char str[] = "abcd";


// printf("%c \n",var);
// printf("%s \n",str);

// .................................................................................................................


// int num=456
// int sum=0;
// for(int i=num ; i>0; i=i/10){
//     int d=i%10;
//     printf("%d\n",d);
//     sum=sum+d;
// }
// printf("%d",sum);

//while loop
// int num=456;
// int sum=0;
// while (num>0)
// {
//     int d =num%10;
//     sum=sum+d;
//     num=num/10;

// }
// printf("%d/n",sum);









//    return 0;
// }

// #include <stdio.h>

// int main() {
//     for (int i = 4; i <= 6; i++) {
//         for (int j = 1; j < 3; j++) {
//             printf("i: %d, j: %d\n", i, j);
//         }
//     }
//     return 0;
// }


#include<stdio.h>
#include <stdbool.h>


bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int roll_numbers[10] = {45, 47, 83, 46, 28, 39, 40, 26, 38, 69};
    int sum_odd = 0, sum_even = 0, sum_prime = 0;

    printf("Multiples of 3:\n");
    for (int i = 0; i < 10; i++) {
        int num = roll_numbers[i];

        if (num % 3 == 0) {
            printf("%d ", num);
        }

        if (num % 2 == 0) {
            sum_even += num;
        } else {
            sum_odd += num;
        }

        if (is_prime(num)) {
            sum_prime += num;
        }
    }

    printf("\n\nSum of odd numbers: %d\n", sum_odd);
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Difference (Even - Odd): %d\n", sum_even - sum_odd);
    printf("Sum of prime numbers: %d\n", sum_prime);

    return 0;
}

#include <stdio.h>

int main() {
    char arr1[5] = {'a', 'd', 'f', 'g', 'l'};
    char arr2[5] = {};

    // Use %d to print size in integer format
    printf("array size %d\n", (int)sizeof(arr1));

    // Use int for loop counters instead of char
    for (int i = 0; i < 5; i++) {
        arr2[5 - i - 1] = arr1[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("%c\n", arr2[i]);
    }

    return 0;
}
