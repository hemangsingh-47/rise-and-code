// #include <stdio.h>

// int main() {
//     int num;
//     int fact = 1;  // factorial should start with 1, not 0

//     scanf("%d", &num);

//     // for (int i = 1; i <= num; i++) {
//     //     fact = fact * i;
//     // }
// // int i = 0;
// // while(i<num){
// //       i++;
// //     fact = fact * i;
  
   
// // }
// int i = 0;
// do{
//         i++;
//     fact = fact * i;

    
// }while(i<num);

//      printf("%d", fact);

//     return 0;
// }


// #include <stdio.h>

// int main() {

//     start:
//     int a=1;

//     // if(a>18){
//     //     printf("vote");
//     // }
//     // else{
//     //     printf("not");
//     // }

//     // (a>18)?printf("vote"):printf("not\n");

// switch (a){

//     case 1:
//     printf("one\n");

//      case 2:
//      printf("two\n");
//     goto start;

//     default:
//     printf("defualt\n");

//     return 0;
// }
//}

// #include <stdio.h>

// int main() {
//     int num;
//     int fac = 1;
    
//     scanf("%d", &num);
    
//     for(int i = 1; i <= num; i++) {
//         fac = fac * i;
//     }
    
//     printf("%d", fac);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int f1=0;
//     int f2=1;
//     int f3;
//   int n=7;

//   for(int i=3;i<=7;i++){
//   f3=f1+f2;

//   f1=f2;
//   f2=f3;

//   }
//  int i=3;
// while( i<=7){

// f3=f1+f2;
// f1=f2;
//  f2=f3;
//  i++;
// }


// #include <stdio.h>

// int main() {
//  int arr[5] = {3,7,9,2,8};
//  int size = sizeof(arr) / sizeof(arr[0]);
//  printf("%d\n",size);
//  int sum = 0;
//  for(int i = 0;i<size;i++){
//      sum = sum + arr[i];
//  }
//  printf("%d\n",sum);


// for(int i = 0;i<size;i++){
//     if(arr[i] % 2 ==0){
//         arr[i] =2;
        
//     }
// }

// for(int i = 0;i<size;i++){
//     printf("%d ",arr[i]);
// }

// int arr[2][3]={{3,9,17},
//                {8,12,14}};

//   // for(int i=0;i<2;i++){
//   //   for(int j=0; j<3;j++){
//   //     sum=sum+arr[i][j];
//   //   }
  
// int sumo = 0;
// int sumt= 0;
// for(int i=  0;i<3;i++){
//     sumo +=arr[0][i];
//     sumt += arr[1][i];
// }
// (sumo>sumt) ? printf("the larger is %d\n",sumo) : printf("the larger is %d\n",sumt);
 
// return 0;




// #include <stdio.h>

// int main() {
//     char fullName[30];

//     printf("Enter full name: ");
//     fgets(fullName, sizeof(fullName), stdin);

//     printf("Hello %s", fullName);

//     // char name[20];
//     // printf("enter your name :");
//     // scanf("%s",&name);

//     // printf("hello %s\n" ,name);
//     return 0;
// }


