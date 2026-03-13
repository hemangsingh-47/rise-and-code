//Q1. Write a C program to print the value and address of a variable using a pointer.

#include <stdio.h>

int main() {
    int num = 12;
     
   int *p = &num;   

    printf("%d\n",*p);
        printf("%p\n",p);

    return 0;
}

#include <stdio.h>
int main() {
    int num1;
    int num2;
    
    printf("Enter numbe1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);
    
    int *n1 = &num2;
    int *n2 = &num1;
    
    printf("Actual value of num1: %d \n",num1);
    printf("Actual value of num2: %d \n",num2);
    
    printf("\n Swaped value of num1: %d \n", *n1);
    printf("Swaped value of num2: %d", *n2);
    
    return 0;
}


#include <stdio.h>
int main() {
    int num1=2;
    int num2=4;

    
    int *n1=&num1;
    int*n2=&num2;
    
    
    *n1=*n1+*n2;
    *n2=*n1-*n2;
    *n1=*n1-*n2;
    
    printf("%d\n",*n1);
    printf("%d\n",*n2);
    
    
    return 0;
}