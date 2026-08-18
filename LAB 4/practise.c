#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int size;
    int top;
    int* arr;
}stack;

int isempty(stack *s){

    if(s->top==-1){
        return 1;
    }
    return -1;
}


int isfull(stack* s){

    if(s->top==s->size-1){
        return 1;
    }return -1;
}

void push(stack *s , int value){

    if(isfull(s)==1){
        printf("Stack overflow");
        return ;
    }

    s->top++;
    s->arr[s->top]=value;
}


int pop(stack *s){
    if(isempty(s)==1){
        printf("Stack underflow");
        return 0;
    }

    int value = s->arr[s->top];
    s->top--;

return value;
}


int peek(stack * s){

    if(isempty(s)==1){
        printf("Stack is empty");
        return 0;
    }

    int value = s->arr[s->top];
    return value;
}


void display(stack *s){

    if(isempty(s)==1){
        printf("Stack is empty");
        return;
    }
        

    for(int i=s->top;i>=0;i--){
        printf("%d\n",s->arr[i]);
    }
}
    
int main(){


    stack *s;
    s=(stack*)malloc(sizeof(stack));

    s->top=-1;
    s->size=100;
    s->arr=(int*)malloc(s->size*sizeof(int));


    push(s,10);
    push(s,20);
    push(s,30);

    int r1 = peek(s);

    printf("The topmost element is %d\n",r1);


    int r2 = pop(s);
    printf("The popped element is %d\n",r2);
    
    display(s);

    free(s->arr);
    free(s);

    return 0;
}
    

