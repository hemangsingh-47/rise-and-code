// #include <stdio.h>

// struct student {
//     int rollno;
//     char* name;
//     float marks;
// };

// int main() {
//     struct student s1;

//      printf("Enter roll number: ");
//     scanf("%d", &s1.rollno);

//     printf("Enter name: ");
//     scanf("%s", s1.name);  

//     printf("Enter marks: ");
//     scanf("%f", &s1.marks);

//     // ----------------------------------------------------------------------------------------------------------------

//     printf("rollno   : %d\n", s1.rollno);

//     printf("name     : %s\n", s1.name);
//     printf("marks    : %f\n", s1.marks);

//     return 0;
// }

#include <stdio.h>

struct Student {
    int rollNo;
    char name[20];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Name (one word): ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}