
#include<stdio.h>
int main(){
// Q1    
 int n;
 printf("enter a number:");
 scanf("%d",&n);
 
// for(int i=1;i<=n;i++){
//     printf("*");
// }

//Q2
// int n;
// printf("enter a number:");
// scanf("%d",&n);
 
// for(int i=1;i<=n;i++){
//     printf("%d",i);
// }

// Q3
// int n;
// printf("enter a number:");
//  scanf("%d",&n);

//  for(int i=65; i<65+n; i++){
//     printf("%c",i);
//  }


//Q4

// for(int i=1; i<=n;i++){
// for(int j=1; j<=n; j++){

//     printf("*");
// }
// printf("\n");
// }

//Q5

// for(int i=1; i<=n;i++){
// for(int j=1; j<=n; j++){

//     printf("%d",j);
// }
// printf("\n");
// }

//Q6

// for(int i=65; i<65+n;i++){
// for(int j=65; j<65+n; j++){

//     printf("%c",j);
// }
// printf("\n");
// }


//Q7
// for(int i=1; i<=n;i++){
// for(int j=1; j<=i; j++){

//     printf("*");
// }
// printf("\n");
// }



//Q8
// for(int i=1; i<=n;i++){
// for(int j=1; j<=i; j++){

//     printf("%d",j);
// }
// printf("\n");
// }



//Q9
// for(int i=65; i<=65+n;i++){
// for(int j=65; j<=i; j++){

//     printf("%c",j);
// }
// printf("\n");
// }



//Q10
// for(int i=1; i<=n;i++){
//     for(int j=1;j<=n-i;j++){
// printf(" ");
//     }
//     for(int k=1;k<=i;k++){
//         printf("*");
//     }
//     printf("\n");
// }



//Q11
// for(int i=1; i<=n;i++){
//     for(int j=1;j<=n-i;j++){
// printf(" ");
//     }
//     for(int k=1;k<=i;k++){
//         printf("%d",k);
//     }
//     printf("\n");
// }


// q12
// for(int i=1; i<=n;i++){
//     for(int j=1;j<=n-i;j++){
// printf(" ");
//     }
//     for(int k=65;k<65+i;k++){
//         printf("%c",k);
//     }
//     printf("\n");
// }

//Q13

// for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=2*i-1; k++){
//             printf("*");
//         }
//         printf("\n");
//     }

//Q14
// for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for(int k=1; k<=2*i-1; k++){
//             printf("%d",k);
//         }
//         printf("\n");
//     }


//Q15
 for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=65; k<65+(2*i-1); k++){
            printf("%c",k);
        }
        printf("\n");
    }





return 0;

}