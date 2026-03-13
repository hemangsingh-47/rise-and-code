#include <stdio.h>

// void maxArr(int n){
//     int arr[]={2,5,9,7};
//     int max=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     printf("%d\n",max);
// }
void maxarr(int n,int i,int max){
    int arr[] = {4,6,8,8,4,2,5,80,9,10,50,30};
    if(i == n-1){
        printf("%d",max);
        return;
    }
    if(arr[i] > max){
        max = arr[i];
    }
    i++;
    maxarr(n,i,max);
}


int main() {
    maxArr(4);
    return 0;
}