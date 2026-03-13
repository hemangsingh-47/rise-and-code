#include<stdio.h>
int main()
{
float num1;
float num2;
scanf("%f%f",&num1,&num2);
 char op;

 scanf(" %c",&op);
 float result;
if(op=='+'){
    result = num1+num2;
 printf("%f",result);
}
else if(op=='-'){
    result = num1-num2;
     printf("%f",result);
}
else if(op=='*'){
    result = num1*num2;
    printf("%f",result);
     
}
else if(op=='/'){
    if(num2 !=0){
    result = num1/num2;
     printf("%f",result);
}
}
else{
printf("invailed input");
}

return 0;
}