#include <stdio.h>

int binarySearch(int *arr , int n , int key){
    int lower = 0;
    int upper = n-1;
    int middle=0;

    while(lower<=upper){
        middle=lower+(upper-lower)/2;

        if(*(arr+middle)==key){
            return middle;
        }
        else if(key<middle){
            upper = middle-1;
        }
        else{
            lower = middle+1;
        }
    }
    return -1;
}

int main(){

     int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    int key = 5;

    int res = binarySearch(arr, n , key);

    printf("Position = %d",res+1);

    return 0;


}