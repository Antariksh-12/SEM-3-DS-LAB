#include <stdio.h>

void Insertion(int *arr , int n){

    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }

        arr[prev+1]=curr;
    }
}

int main(){

    int arr[5]={2,4,56,2,1};

    Insertion(arr,5);

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}