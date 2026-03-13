// #include <stdio.h>

// struct book {
//     char* title;
//     char* author;
//     float price;
// };

// int main() {
//     struct book o1;

//      printf("Enter title: ");
//     scanf("%d", &o1.title);

//     printf("Enter  author name: ");
//     scanf("%s", o1.author);  

//     printf("Enter price: ");
//     scanf("%f", &o1.price);


//     printf("Title   : %s\n", o1.title);
//     printf("Author  : %s\n", o1.author);
//     printf("Price   : %.2f\n", o1.price);

//     return 0;
// }

#include <stdio.h>

struct book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct book o1;

    printf("Enter title: ");
    scanf("%s", o1.title);  
    printf("Enter author name: ");
    scanf("%s", o1.author);

    printf("Enter price: ");
    scanf("%f", &o1.price);

    printf(" \nTitle   : %s\n", o1.title);
    printf("Author  : %s\n", o1.author);
    printf("Price   : %.2f\n", o1.price);

    return 0;
}