#include <stdio.h>

struct data{
    char* name;
    char* email;
    long long int mobile;
   
};


    int main(){
 


    struct data d1,d2,d3;

    // char *name;
    // char *email;
    // long long int mobile;
   
    d1.name = "hemang";
    d1.email = "hemangsingh47@gmail.com";
    d1.mobile = 999999999999999999;

    d1.mobile =9874561230;
  
    printf("%s\n", d1.name);

    printf("%s\n", d1.email);

    printf("%lli\n", d1.mobile);

    
    d2.name = "lock";
    d2.email = "singh47@gmail.com";
    d2.mobile = 999999999999999999;
  
    printf("%s\n", d2.name);

    printf("%s\n", d2.email);

    printf("%lli\n", d2.mobile);

     d3.name = "tulya";
    d3.email = "ty47@gmail.com";
    d3.mobile = 999999999999999999;
  
    printf("%s\n", d3.name);

    printf("%s\n", d3.email);

    printf("%lli\n", d3.mobile);



    return 0;
}