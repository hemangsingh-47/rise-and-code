#include<stdio.h>
int main (){
    int num;

scanf("%d\n",&num);

int result=1;

for( int a = 1 ; a <= num ; a=a+1){

result = result * a;

printf("%d\n",result);
}

return 0;
}