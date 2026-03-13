#include <stdio.h>

int main() {


 //Q1 leap year

// int year;
// printf("Enter the year :");
// scanf("%d",&year);

// if((year%400==0)||(year%4==0 && year%100!=0)){
//   printf("leap Year");  
// }

// else{
//     printf("not a leap year");
// }



    int n, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            count++;
    }

    if(count == 0 && n > 1)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);

    return 0;
}


