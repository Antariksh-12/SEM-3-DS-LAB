#include <stdio.h>
#include <stdlib.h>


typedef struct student{
    char name[100];
    int roll;
    char grade;
}student;

 
void read(student s[] , int n){
    for(int i=0;i<n;i++){

        printf("Enter details for student %d\n",i+1);

        printf("Enter name :");
        scanf(" %[^\n]",s[i].name);

        printf("Enter roll number :");
        scanf("%d",&s[i].roll);

        printf("Enter grade :");
        scanf(" %c",&s[i].grade);
    }
}

void display(student s[] , int n){
    for(int i=0;i<n;i++){

        printf("Student %d ",i+1);
        printf("Name :%s\n",s[i].name);
        printf("Roll Number :%d\n",s[i].roll);
        printf("Grade : %c\n",s[i].grade);
    }
}

void sort(student s[] , int n){
    student temp;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].roll>s[j+1].roll){
                temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}


int main(){

   int n;
   printf("Enter the number of students :");
   scanf("%d",&n);

   student s[n];

   read(s,n);

   printf("Before sorting :");
   display(s,n);

   sort(s,n);

   printf("After sorting :");
   display(s,n);

   return 0;





}