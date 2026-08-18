#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char name[100];
    int roll;
    float marks;
}student;

void input(student* s , int n){

    for(int i=0;i<n;i++){
        scanf(" %[^\n]",s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%f",&s[i].marks);
    }
}

void display(student *s , int n){
    for(int i=0;i<n;i++){

        printf("%[^\n]",s[i].name);
        printf("%d\n",s[i].roll);
        printf("%f\n",s[i].marks);
    }
}

student* highest(student *s , int n){

    student * top = &s[0];

    for(int i=0;i<n;i++){
        if(s[i].marks>top->marks){
            top=&s[i];
            
        }
    }
return top;
}




int main(){

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);

    student* s;

    s=(student*)malloc(n*sizeof(student));

    input(s,n);
    display(s,n);

    student *top = highest(s,n);

   printf("Student with highest marks :");
    printf("Name :%s\n",top->name);
    printf("Roll Number :%d\n",top->roll);
    printf("Marks :%f\n",top->marks);

return 0;
}