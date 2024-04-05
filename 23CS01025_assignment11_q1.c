#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[100];
int top = -1;

void push(char k)
{
    if(top==99){
        printf("The stack is full");
        return;
    }else{
        top+=1;
         stack[top] = k;
    }
};
char pop()
{
    if(top==-1){
        printf("The stack is empty");
        
    }
        char k = stack[top];
        top-=1;
        return k;
    };

void stringrever(char *s){

    int lenth = strlen(s);
    int i; 
    for(i=0; i<lenth;i++){
        push(s[i]);
    }
    for( i=0; i<lenth;i++){
        s[i] = pop();
    }
};
int main(){
    int i; 
    char b[100];
    printf("Enter string:");
    scanf("%s", b);

    stringrever(b);
    printf("\nThe reversed string is");
    printf("\n%s", b);
    return 0;
}