#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
    int top;
    int size;
    char* str;
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

void push(stack *s , char value){

    if(isfull(s)==1){
        printf("Stack Overflow");
        return ;
    }

    s->top++;
    s->str[s->top]=value;
}

char pull(stack *s){

    if(isempty(s)==1){
        printf("Stack is empty");
        return 0;
    }

    char value = s->str[s->top];
    s->top--;

    return value ;
}

int ispalindrome(char* str, stack *s){

    
    int len=0;
    int i=0;
    while(str[i]!='\0'){
        i++;
        len++;
    }

    for(int i=0;i<len;i++){
        push(s,str[i]);
    }

    for(int i=0;i<len;i++){
        char popped = pull(s);

        if(popped!=str[i]){
            free(s->str);
            free(s);
            return -1;
        }
    
    }

    free(s->str);
    free(s);

    return 1;
}

int main(){

    char str[100];
    printf("Enter a string :");
    scanf("%s",str);


    stack *s = (stack*)malloc(sizeof(stack));

    s->top=-1;
    s->size=strlen(str);
    s->str= (char*)malloc(s->size*sizeof(char));


    if(ispalindrome(str,s)==1){
        printf("The given string is a palindrome");
    }else{
        printf("The given string is not a palindrome");
    }
        


    return 0;
}



