#include <stdio.h>
int revNum(int N,int rev){
    if(N==0){
        return rev;
    }
    rev = rev * 10 + (N % 10);
    return revNum(N / 10,rev);
}
int main() {
    int N;
    scanf("%d",&N);

printf("%d",revNum(N,0));
    return 0;
}


// #include <stdio.h>
// int fibo(int N){
//     if(N == 0){
//         return 0;

//     }
//     if(N == 1){
//         return 1;
//     }
//     return fibo(N-1) + fibo(N-2);
// }
// int main() {
// int N;
// scanf("%d",&N);
// for(int i = 0;i<=N;i++){
//     printf("%d ",fibo(i));
// }

//     return 0;
// }

// #include <stdio.h>

// void printNto1(int N){

//     if(N == 0){

//         return;

//     }

//     printf("%d",N);

//     printNto1(N-1);

// }

// int main() {

//     int N;

//     scanf("%d",&N);

//     printNto1(N);

    

//     return 0;

// }

// #include <stdio.h>
// int fact(int N){
//     if(N == 0 || N== 1){
//         return 1;

//     }
//     return (N*fact(N-1));
// }
// int main() {
// int N;
// scanf("%d",&N);
// printf("%d",fact(N));

//     return 0;
// }


#include<stdio.h>
int fib(int n){
    if(n==0){
     return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    printf("enter a num :");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        printf("%d\n",fib(i));
    }
    return 0;
}