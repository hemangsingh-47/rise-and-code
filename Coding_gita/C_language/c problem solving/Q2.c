#include <stdio.h>

int main() {
    int n = 1234; // Example number
    int add = n;
    int check = add;
    int pos = 0;

    // Count number of digits
    while (check > 0) {
        check = check / 10;
        pos++;
    }

    if (pos % 2 == 0) {
        pos = pos / 2;
        int r=1;
        for(int i=pos;i>0,i--){
            r=r*10;
        }

        int first = add % (int)pow(10*pos);
        int second = add / (int)pow(10*pos);
        int sum = first + second;

        if (sum == (n * n)) {
            printf("%s", "true");
        } else {
            printf("%s", "false");
        }
    } 

    return 0;
}