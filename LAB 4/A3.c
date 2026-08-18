#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
    int top;
    int size;
    char* arr;
}stack;

int isempty(stack *s){
    if(s->top==-1){
        return 1;
    }
    return -1;
}

int isfull(stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    return -1;
}

void push(stack *s ,int value){
    if(isfull(s)==1){
        return;
    }
    s->top++;
    s->arr[s->top]=value;
}

int pull(stack *s){

    if(isempty(s)==1){
        printf("Empty Stack");
        return;
    }

    int value = s->arr[s->top];
    s->top--;
    return value;
}

int main(){

        





}