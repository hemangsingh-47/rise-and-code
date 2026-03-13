#include<stdio.h>
int main ()
{
int a;
scanf("%d",&a);
int track=0;
    for(int b=2 ;b<=a-1 ; b=b+1){
if(a%b==0){
    track=track+1;
    break;
}
    }
if(track==0){
    printf("prime");

}
else{
    printf("not prime");
}
return 0;

}