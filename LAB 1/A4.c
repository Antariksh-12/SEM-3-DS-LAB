#include <stdio.h>

void Selection(int arr[] , int n){

    for(int i=0;i<n-1;i++){
        int smallestidx = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx = j;
            }
        }
        int temp = arr[smallestidx];
        arr[smallestidx]=arr[i];
        arr[i]=temp;
    }
}

int main(){

    int arr[5]={54,4545,15,48,157};

    Bubble(arr,5);

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

#include <stdio.h>

void selection(int *arr , int n){
    for(int i=0;i<n-1;i++){
        int smallestidx = i;
        
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx=j;
            }
        }
        int temp = arr[smallestidx];
        arr[smallestidx]=arr[i];
        arr[i]=temp;
    }
}