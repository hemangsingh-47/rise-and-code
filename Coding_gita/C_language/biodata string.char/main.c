// #include <stdio.h>

//     struct st1{
//         char* name;
//         char* email;
//         long long int mobile;
//     };
    
//     struct st2{
//         float tenth;
//         float twelve;
//         float sem1;
//           struct st1 obj;
//     };

//     struct st3{
//         long int section;
//         char* university;
//          struct st1 obj;
//         struct st2 info;
//     };

// int main() {
    


// struct class c1;

// c1.b1.a1 name = "Hemang";
// printf("name :%s \n",c1.b1.a1.name);

// c1.b1.a1 email = "Hemang@gmail.com";
// printf("email :%s \n",c1.b1.a1.email);

// c1.b1.a1.mobile = 999999999999999999;
// printf("mobile:%lld \n",c1.b1.a1.mobile);

// b1.a1.tenth = "88";
// printf("role:%f \n",b1.a1.tenth);



// // struct detail;


//     return 0;
// }

#include <stdio.h>

struct st1 {
    char* name;
    char* email;
    long long int mobile;
};

struct st2 {
    float tenth;
    float twelve;
    float sem1;
    struct st1 obj;
};

struct st3 {
    int section;
    char* university;
    struct st1 obj;
    struct st2 info;
};

int main() {
    struct st3 c1;

   
    c1.obj.name = "Hemang";
    c1.obj.email = "Hemang@gmail.com";
    c1.obj.mobile = 9999999999;

 
    c1.info.tenth = 88.0;
    c1.info.twelve = 90.5;
    c1.info.sem1 = 9.1;

    c1.section=714;
    c1.university="SU";

    
    printf("Name     : %s\n", c1.obj.name);
    printf("Email    : %s\n", c1.obj.email);
    printf("Mobile   : %lld\n", c1.obj.mobile);
    printf("10th     : %.2f\n", c1.info.tenth);
    printf("12th     : %.2f\n", c1.info.twelve);
    printf("Sem1     : %.2f\n", c1.info.sem1);
     printf("section  : %d\n", c1.section);
      printf("university    : %s\n", c1.university);

    return 0;
}