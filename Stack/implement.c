#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
    int elements[];

};
int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack * ptr){
    if(ptr->top== ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int number,struct stack*ptr){

    for(int i=0; ptr->arr[0])
}
int main(){
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // //indicates that the stack doesnt have a single element
    // s.arr=((int*)malloc(s.size * sizeof(int)));

    struct stack * s;
    s->size=80;
    s->top=-1;
    //indicates that the stack doesnt have a single element
    s->arr=(int*)malloc(s->size * sizeof(int));

//check if stack is empty
if(isEmpty(s)){
    printf("The stack is empty");
}
else{
    printf("The stack is not empty");
}
//check if the stack is full
if(isFull(s)){
    printf("The stack is full ");
}
else{
    printf("The stack is not full");
}
}

