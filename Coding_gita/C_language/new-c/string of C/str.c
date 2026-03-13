#include <stdio.h>
#include <string.h>
int main() {
//     char a[10] = "nishit";
    // char *a = "doshi";
//     a[2] = 'e';
//     printf("%s",a);
//   int b =   strlen(a);
//   printf("%s",a);
//   a[1] = 'e';
//   printf("%s",a);
  
//     printf("%d",b);

char hemang[90] = "nothing";
char nishit[20] = "koersfsfdt55556";

// strcpy(hemang,nishit);


// strcat(hemang,nishit);
// printf("%s",nishit);
// int a = strcmp(hemang,nishit);
// if(strcmp(hemang,nishit)==0){
// printf("hello");
// }
// else{
//     printf("nothing");
// }


// strncat(hemang,nishit,3);
// printf("%s",hemang);
strncpy(hemang,nishit,82);
printf("%s",hemang);
// printf("%d",strncmp(hemang,nishit,3));
    return 0;
}