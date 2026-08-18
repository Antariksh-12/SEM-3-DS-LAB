#include <stdio.h>

int main(){

    int m , n ,a ,b;
    printf("Enter the number of rows and columns of fiirst array :");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows and columns of second array :");
    scanf("%d%d",&a,&b);


    int arr1[m][n];
    int arr2[a][b];
    int arr3[m][b];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr2[i][j]);
        }
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<b;j++){
            arr3[i][j]=0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<n;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;

}