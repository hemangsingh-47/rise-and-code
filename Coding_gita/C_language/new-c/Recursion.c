// #include <stdio.h>

// int main() {
//     int num;
//     scanf("%d",&num);
//     int f1 = 0;
//     int f2 = 1;
    
// printf("%d ", f1);
// for(int i = 1; i < num; i++){
//  printf("%d\n", f2);
// int f3 = f1 + f2;
// f1 = f2;
//  f2 = f3;
//     }


//     return 0;
// }

// #include <stdio.h>

// int fib(int num) {

//     if (num == 0)  //base case
//         return 0;

//     if (num == 1)  //base case
//         return 1;

//     return fib(num - 1) + fib(num - 2);
// }

// int main() {
//     printf("%d", fib(7));
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number to print its multiplication table: ");
//     scanf("%d", &num);

//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }

//     return 0;
// }



// #include <stdio.h>
//  void table(int num,int i){
//     if(i>10){
//         return;
//     }
//     printf("%d*%d=%d\n",num,i,(num*i));
//     table(num,i+1);
//  }
// int main(){
//     table(8,1);
// return 0;
// }



// #include <stdio.h>
//  void table(int num,int i){
//     if(num>9){
//         return;
//     }
//     printf("%d*%d=%d\n",num,i,(num*i));
//     table(num+1,i);
//  }
// int main(){
//     table(5,5);
// return 0;
// }



// #include <stdio.h>
//  void table(int num,int i){
//     if(i>10){
//         return;
//     }
//     printf("%d*%d=%d\n",num,i,(num*i));
//     table(num,i+2);
//  }
// int main(){
//     table(8,1);
// return 0;
// }



// #include <stdio.h>

// int main() {
// int count=0;
// int num;
// printf("enter a number");
// scanf("%d",&num);

// while(num>0){
//      num = num / 10;
//         count++;
// }

// printf("%d",count);
//     return 0;
// }

#include <stdio.h>

int countDig(int num){
    int count;
    if(num==0){
        count==0;
    }
    else{
        count=countDig(num/10)+1;  
    }
    return count;
}
int main() {
printf("%d",countDig(1234));
    return 0;
}

