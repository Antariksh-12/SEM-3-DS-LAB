#include <stdio.h>

int* find(int *arr , int n){
    // int smallest = *arr;

    // for(int i=0;i<n;i++){
    //     if(*(arr+i)<smallest){
    //         smallest = *(arr+i);
    //     }
    // }
    // return smallest;

    int* smallest = arr;

    for(int i=1;i<n;i++){
        if(*(arr+i)<*smallest){
            smallest = arr+i;
        }
    }
    return smallest;
}

int main(){

    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
    int* res = find(arr , n);

    printf("The smallest element in the array is %d\n",*res);

    return 0;
}







