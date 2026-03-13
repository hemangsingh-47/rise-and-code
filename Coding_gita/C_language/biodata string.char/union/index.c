#include<stdio.h>

struct class{
    int a;
    float b;
    long long int c;
    char d;
    char str[5];
    int arr[5];
 }
 __attribute__((packed));

int main(){

    struct class obj;

    printf("Size of structure is: %d \n", sizeof(obj));

    return 0;
};

// #include <stdio.h>

// union class {
//     int a;
//     float b;
//     long long int c;
//     char d;
//     char str[5];
//     int arr[5];
// };

// int main() {
//     union class obj;

//     printf("Size of union is: %d \n", sizeof(obj));

//     return 0;
// }




// #include <stdio.h>

// struct diff{
//     int n;
//     float m;
//     long long int x;
//     char ch;
//     char* str[5];
// };

// int main() {
//     struct diff d;
    
//     d.n=10;
//     printf("%d\n",d.n);
    
//     d.m=1.0;
//     printf("%f\n",d.m);
    
//     d.x=472193333221212;
//     printf("%lld\n",d.x);
    
//     d.ch='a';
//     printf("%c\n",d.ch);
    
//     d.str[5] = "abcde";
//     printf("%s\n",d.str[5]);

//     return 0;
// }