#include<stdio.h>
#include<stdbool.h>
int main ()
{
int a;
scanf("%d",&a);
bool isprime =true;
    for(int b=2 ;b<=a-1 ; b=b+1){
if(a%b==0){
   bool isprime= false;
    break;
}
    }
if(isprime==true){
    printf("prime");

}
else{
    printf("not prime");
}
return 0;

}
