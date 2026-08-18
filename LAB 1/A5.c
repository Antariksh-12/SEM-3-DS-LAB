#include <stdio.h>

void Insertion(int arr[] , int n){

    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
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