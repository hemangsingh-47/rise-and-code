#include<stdio.h>
int main(){


//     for( int a=1 ; a<=10 ; a=a+1){
// printf("%d\n",a*5);
//  }
int num;
scanf("%d",& num);

int result=1;

for( int a=1 ; a<= num ; a=a+1){
    //1*2*3*4*5 =120
    result = result * a;
}
printf("%d\n",result);



 return 0;
 
}