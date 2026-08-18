#include <stdio.h>

int linearSearch(int *arr , int n , int key){
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
return -1;}
            
       

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    int res = linearSearch(arr,n,3);

    printf("Index = %d\n",res);

    return 0;

}