// #include <stdio.h>

// int main() {
//     // int arr[8] = {3, 8, 7, 6, 5, 4, 6, 3};
//     // int size = 8;

//     // for (int i = 0; i < size; i++) {
//     //     for (int j = i + 1; j < size; j++) {
//     //         if (arr[i] == arr[j]) {
//     //             printf("%d ", arr[i]);
//     //             break;  
//     //         }
//     //     }
//     // }

// auto int num=10;
// printf("%d\n",num);

//     return 0;
// }


#include <stdio.h>

void count(int num2){
    num2++;
    printf("count: %d\n", num2);
}

void count2(){
    static int num = 10;
    num++;
    printf("num: %d\n", num);
}

int main() {
    static int num2 = 10;  // static variable
    auto int num1 = 12;    // auto is default, optional
    register int num3 = 13; // stored in CPU register (if possible)

    int *p = &num2;        // pointer needs a semicolon

    count2();
    count2();
    count2();

    count(num2);
    count(num2);
    count(num2);

    return 0;
}

