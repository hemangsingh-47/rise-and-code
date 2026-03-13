// #include<stdio.h>
// void max(){
//     int arr1[5]={7,11,89,45,34};
//     int max=arr1[0];
//     for(int i=0;i<5;i++){
//         if(arr1[i]>max){
//             max=arr1[i];
//         }
//     }
// printf("max %d\n",max);
// }

// int main(){
//     max();
//    return 0;
// }

                   
                             // Function to find and print the maximum value in an array

// #include <stdio.h>

// void min() {
//     int arr1[5] = {7, 11, 89, 45, 34};
//     int min = arr1[0];

//     for (int i = 0; i < 5; i++) {
//         if (arr1[i] < min) {
//             min = arr1[i];
//         }
//     }

//     printf("min %d\n", min);
// }

// int main() {
//     min();
//     return 0;
// }



                              // Function to find and print the maximum value in an array
 #include <stdio.h>
void max(int arr1[]) {
    int max = arr1[0];
    for (int i = 1; i < 5; i++) {
        if (arr1[i] > max) {
            max = arr1[i];
        }
    }
    printf("Max %d\n", max);
}

int main() {
    int arr1[] = {22, 33, 65, -121, -22};
    int arr2[] = {2, 3, 6, -1, -22};

    max(arr1);
    max(arr2);

    return 0;
}



