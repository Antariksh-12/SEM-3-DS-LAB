#include <stdio.h>

typedef struct Student{
    char name[50];
    int roll_no;
    float marks;
}Student;


void read(Student* arr , int n){

    for(int i=0;i<n;i++){
        printf("Enter details of student %d",(i+1));
        printf("Enter name :");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter roll number :");
        scanf("%d",&arr[i].roll_no);
        printf("Enter marks :");
        scanf("%f",&arr[i].marks);
    }

}

void display(Student* arr , int n){

    for(int i=0;i<n;i++){
        printf("Student details for student %d\n",i+1);
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].roll_no);
        printf("%.2f\n",arr[i].marks);
    }
}

Student* topper(Student* arr ,int n){
    Student* top = &arr[0];

    for(int i=1;i<n;i++){
        if(arr[i].marks>top->marks){
            top=&arr[i];
        }
        return top;
    }
}
        


int main(){

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);

    Student arr[n];

    read(&arr,n);
    display(&arr,n);


    Student* top = topper(arr,n);

    printf("Student with highest marks :");
    printf("Name :%s\n",top->name);
    printf("Roll Number :%d\n",top->roll_no);
    printf("Marks :%s\n",top->marks);


    return 0;
}