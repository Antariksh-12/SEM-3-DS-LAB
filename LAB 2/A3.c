#include <stdio.h>
#include <stdlib.h>

void read(int **mat , int r1 , int c1){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",(*(mat+i)+j));
        }
    }
}

void display(int **mat , int r1 , int c1){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",*(*(mat+i)+j));
        }
        printf("\n");
    }
}

void multiply(int **A , int **B , int **C , int r1 , int c1 , int r2 , int c2){

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            *(*(C+i)+j)=0;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                *(*(C+i)+j)+=*(*(A+i)+k)* *(*(B+k)+j);
            }
        }
    }

}
int main(){

    int r1 , c1 , r2 , c2;
    printf("Enter the rows and columns of first matrix :");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns of second matrix :");
    scanf("%d%d",&r2,&c2);

    int **A=(int**)malloc(r1*sizeof(int*));
    for(int i=0;i<r1;i++){
        A[i]=(int*)malloc(c1*sizeof(int));
    }

    int **B=(int**)malloc(r2*sizeof(int*));
    for(int i=0;i<r2;i++){
        B[i]=(int*)malloc(c2*sizeof(int));
    }

    int **C=(int**)malloc(r1*sizeof(int*));
    for(int i=0;i<r1;i++){
        C[i]=(int*)malloc(c2*sizeof(int));
    }

    read(A,r1,c1);
    read(B,r2,c2);

    multiply(A,B,C,r1,c1,r2,c2);

    display(C,r1,c2);
    
    return 0;



    

}