#include <stdio.h>
int main()
{

float temp;
scanf("%f",&temp);
if(temp>=35.0){
    printf("very hot\n");
}
else if(temp>=25.0){
    printf("sunny\n");
}
else{
    printf("cold\n");
}
    return 0;
}