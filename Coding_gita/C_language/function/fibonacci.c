#include<stdio.h>
int main(){

int i,f2,f3,f1;
printf("enter a num1:");
scanf("%d",&f1);

printf("enter a num2:");
scanf("%d",&f2);

for(int i=0; i<4; i++){
    f3=f1+f2;
    f1=f2;
    f2=f3;
    printf("%d\n",f3);
}
return 0;

}

// #include <stdio.h>

// int f1=0,f2=1,f3=0;

// int fibonacci(int n){
//     for(int i=1; i<=n-2; i++){
//     f3=f1+f2;
//     f1=f2;
//     f2=f3;
//     }
//     printf("%d",f3);
//     return 0;
// }




// int main()
// {
//     fibonacci(4);
    
//     return 0;
// }