#include<stdio.h>
int main()
{
int a;
scanf("%d",a);
if(a%2==0){
    printf("it is divisible by 2\n");
    if(a%4==0){
    printf("it is divisible by 4\n");
}
else{
    printf("it is not divisible 4\n");
}
}
else{
    printf("it is not divisible by 2 or 4\n");
}
  return 0;  
}








