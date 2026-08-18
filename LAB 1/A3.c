#include <stdio.h>

void bubbleSort(int *arr , int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionSort(int *arr , int n){
    for(int i=0;i<n-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[smallestidx];
        arr[smallestidx]=temp;
    }
}

void insertionSort(int *arr , int n){
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

  int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }


    bubbleSort(arr,n);
    selectionSort(arr,n);
    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }

    return 0;
}

