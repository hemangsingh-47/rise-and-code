#include<stdio.h>
int main(){
int n,i,j;

 printf("Enter the number of rows: ");  
 scanf("%d", &n);

//                                                                     // Outer loop for rows
//     for (i = 1; i <= n; i++) {
//                                                                // Inner loop for numbers in each row
//         for (j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//                                                                 // Move to next line
//         printf("\n");
//     }



// int n;
// printf("Enter number of rows: "); scanf("%d", &n);
// for (int i = n; i >= 1; i--) {
//     for (int j = 1; j <= n; j++) {
//         printf("*");
//     }     printf("\n");
// }

for (int i=n; i >= 1; i--) {
    for(int j=n-i+1;j>0;j--){
        printf("%d",i);
    }printf("\n");
}

// for (int i = n; i>=1; i--) {
//     for(int j=1;j<=i;j++){
//         printf("%d",i);
//     }printf("\n");
// }

// for(int i=3;i<=1;i--){
//     for(int j=65;j<=i+3;j++){
//          printf("%c",j);
//     }printf("\n");
// }   


// int n;
// scanf("%d", &n);
// printf("\n");


//      for(int i=n; i>=1; i--){ 
//           for (int j=n; j>=1; j--){
//                 printf(" %d",i );
// }
//        printf("\n");
// }

return 0;
}
