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


char pop(stack *s){
    if(isempty(s)==1){
        printf("Stack underflow");
        return 0;
    }

    int value = s->arr[s->top];
    s->top--;

return value;
}

int parenthesismatching(stack *s , char* str){

    int i=0;
    int len=0;
    
    while(str[i]!='\0'){
        i++;
        len++;
    }

    for(int i=0;str[i]!='\0';i++){

        if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            push(s,str[i]);
        }

        else if(str[i]=='}'|| str[i]==')'||str[i]==']'){
            if(isempty(s)){
                return 0;
            }

            char popped = pop(s);

            if(str[i]==')' && popped!='('){
                return 0;
            }
            else if(str[i]=='}' && popped!='{'){
                return 0;
            }
            else if(str[i]==']' && popped!='['){
                return 0;
            }
        }
    }

    if(isempty(s)){
        return 1;
    }
    return 0;
}

int main(){

    char str[100];
    printf("Enter the string :");
    scanf("%s",str);

    stack* s = (stack*)malloc(sizeof(stack));

    s->top=-1;
    s->size=strlen(str);
    s->arr=(char*)malloc(s->size*sizeof(char));

    if(parenthesismatching(s,str)==1){
        printf("Parenthesis are matching");
    }
    else{
        printf("The parenthesis are not matching");
    }

    free(s->arr);
    free(s);

    return 0;
}

