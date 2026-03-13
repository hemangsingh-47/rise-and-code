// #include<stdio.h>

// void even(int num){
  
//     if(num%2==0){
//         printf("even %d \n",num);
//     }
//     else{
//         printf("odd %d \n",num);
//     }
// }


// int main(){
//     even(0);
//         even(4);
//             even(7);
//                 even(29);
//     return 0;
// }

#include<stdio.h>

int type(int num){
  
    if(num>0){
        // printf("positive %d \n",num);
        printf("1");
        // return 1;
    }
    else if(num<0){
        //  printf("negitive %d \n",num);
        // return -1;
         printf("-1");
    }
    else{
        // printf("zero %d \n",num);
        // return 0;
         printf("0");
    }


         
}


int main(){
   type(2);
   type(-1);
   type(0);

    return 0;
}

