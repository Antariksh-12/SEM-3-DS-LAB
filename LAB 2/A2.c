#include <stdio.h>

void selectionSort(int *arr, int n, int start){

    if(start>=n-1){ //base case
        return;
    }

    int *min = arr+start; //pointer points to first element

    for(int *p=arr+start+1;p<arr+n;p++){//p point to second ele
        if(*p<*min){ //p<arr+n visit all addresses
            min = p;
        }
    }

    /*int temp =arr[i];
    arr[i]=arr[smallestodx];
    arr[smallestidx]=temp;*/

    int temp = *(arr+start);
    *(arr+start)=*min;
    *min = temp;


    selectionSort(arr,n,start+1);


}
int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    selectionSort(arr,n,0);

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }

    return 0;
}
