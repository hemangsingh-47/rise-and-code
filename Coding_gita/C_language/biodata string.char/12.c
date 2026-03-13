#include<stdio.h>

union marks{
    float Subject1;
    float Subject2;
    float Subject3;
    float Subject4;
    float Subject5;
    float Subject6;
    float percentage;
};

int main(){

    union marks student;

    student.Subject1;
    student.Subject2;
    student.Subject3;
    student.Subject4;
    student.Subject5;
    student.Subject6;

    printf("Enter marks of 6 Subject: \n");
    scanf("%f %f %f %f %f %f", &student.Subject1, &student.Subject2, &student.Subject3, &student.Subject4, &student.Subject5, &student.Subject6);

    student.percentage = (student.Subject1 + student.Subject2 + student.Subject3 + student.Subject4 + student.Subject5 + student.Subject6) / 6;

    printf("Percentage: %.2f %% \n", student.percentage);

    return 0;
}