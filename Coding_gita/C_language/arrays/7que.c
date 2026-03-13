// 1.Find Maximum and Minimum Element

#include<stdio.h>
void max(int arr1[]){
    int max=arr1[0];
    for (int i = 1; i < 5; i++){
        if(arr1[i]>max){
            max=arr1[i];
        }
    }
    printf("max%d\n",max);
}



// void min(int arr1[]){
//     int min=arr1[0];
//     for (int i = 1; i < 5; i++){
//         if(arr1[i]<min){
//             min=arr1[i];
//         }
//     }
//     printf("min%d\n",min);
// }

// int main(){
//     int arr1[] = {22, 33, 65, -121, -22};
//     max(arr1);
//     min(arr1);
//     return 0;
// }




 #include <stdio.h>
  int main() {
//     //  1.Find Maximum and Minimum Element.
//     int n, max, min;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     printf("Maximum element: %d\n", max);
//     printf("Minimum element: %d\n", min);

 
//....................................................................................   2nd
//  int n;
//     int sum=0;
//     float avg;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     avg = (float)sum/n;
//     printf("Sum: %d\n", sum);
//     printf("Average:%.2f\n",avg);


// int n;
                                                          
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int arr[n], arr1[n];

                                                      
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         arr1[i] = 0;
//     }

//     printf("\nElement Frequencies:\n");
//     for (int i = 0; i < n; i++) {
//         if (arr1[i] == 1)
//             continue;  

//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 arr1[j] = 1;  
//             }
//         }
//         printf("%d : %d\n", arr[i],count);
// }

// int arr[4]={1,3,8,1};
// int count=0;
// int len=sizeof(arr)/sizeof(arr[0]);

// for(int j=0; j<len; j++){
//     for(int i =0; i<len;i++){
//     if(arr[j]==arr[i]){
//         count++;
//     }
// }
// printf("Freq of arr[%d]: %d \n", j ,count);
// count=0;

//   }

// int n,i,j;

//  printf("Enter the number of rows: ");
//     scanf("%d", &n);

//                                                                     // Outer loop for rows
//     for (i = 1; i <= n; i++) {
//                                                                // Inner loop for numbers in each row
//         for (j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//                                                                 // Move to next line
//         printf("\n");
//     }



    

 return 0;
 }


