#include<stdio.h>
float type(float num){
  
    if(num>0){
        // printf("positive %d \n",num);
        // printf("1");
        return 1.3;
    }
    else if(num<0){
        //  printf("negitive %d \n",num);
        return 8.6;
        //  printf("-1");
    }
    else{
        // printf("zero %d \n",num);
        return 7.6;
        //  printf("0");
    }


         
}


int main(){
//    type(2);
//    type(-1);
//    type(0);
float num= type(-3);
printf("%f",num);

    return 0;
}