// #include <stdio.h>

// int main() {
//     int roll_numbers[10] = {45, 47, 83, 46, 28, 39, 40, 26, 38, 69};
//     int sum_odd = 0, sum_even = 0;

//     printf("Multiples of 3:\n");
//     for (int i = 0; i < 10; i++) {
//         if (roll_numbers[i] % 3 == 0) {
//             printf("%d ", roll_numbers[i]);
//         }

//         if (roll_numbers[i] % 2 == 0) {
//             sum_even += roll_numbers[i];
//         } else {
//             sum_odd += roll_numbers[i];
//         }
//     }

//     printf("\n\nSum of odd numbers: %d\n", sum_odd);
//     printf("Sum of even numbers: %d\n", sum_even);
//     printf("Difference (Even - Odd): %d\n", sum_even - sum_odd);

//     return 0;
// }


#include <stdio.h>
int main() {
  int  marks[5] = {45, 29, 67, 78, 90};

  for(int i=0; i<5; i++){

    printf("student %d = %d\n", i+1,  marks[i]);
}
    return 0;
}


// #include <stdio.h>
// int main(){
//     int roll_number[8]={18,45,1,99,10,7,34,100};
//     printf("multiples of 2:\n");

//     for ( int i=0; i<8; i++){
//       if (roll_number[i]%2==0){
//         printf("%d\n",roll_number[i]);
//       } 
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n, i;
//     printf("Enter number of students: ");
//     scanf("%d", &n);

//     int marks[n];   // variable length array

//     printf("Enter %d marks:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &marks[i]);
//     }

//     printf("Marks are:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", marks[i]);
//     }
//     return 0;
// }

                                //   Reverse the array
// #include<stdio.h>
// int main(){

// int arr[5]={4,5,7,9,10};

// for(int i=4; i>=0;i--){
// printf("%d\n",arr[i]);
// }

// return 0;
// }


                                            //    size of array in integer

// #include<stdio.h>
// int main(){

// int arr1[5]={1,3,5,6,7};
// int arr2[5]={};

// printf("array size %d\n",sizeof(arr1));

// for(int i=0 ; i<5;i++){
//     arr2[5-i-1]=arr1[i];
// }
// for(int i=0 ; i<5; i++){
//     printf("%d\n",arr2[i]);
// }

// return 0;
// }
  

//                                                     //    size of array in float
// #include<stdio.h>
// int main(){

// float arr1[5]={1.1,1.3,8.3,9.2,9.8};
// float arr2[5]={};

// printf("array size %d\n",sizeof(arr1));

// for(char i=0 ; i<5;i++){
//     arr2[5-i-1]=arr1[i];
// }
// for(int i=0 ; i<5; i++){
//     printf("%f\n",arr2[i]);
// }

// return 0;
// }

