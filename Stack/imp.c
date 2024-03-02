#include<stdio.h>
#include<stdlib.h>
#define size 5
struct stack{
    int s[size];
    int top;
}st;

int stfull(){
    if(st.top >= size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int push(int item){
    if(stfull){
        printf("stack is full");
    }
    else{
        st.s[st.top]=item;
        st.top++;
    }
}

int stempty(){
    if(st.top<=-1){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(){
    if(stempty){
        printf("no elements");
    }
    else{
        int item=st.s[st.top];
        st.top--;
        return item;
    }
}
void display(){
    for(int i=st.top;i>=0;i--){
        printf("\t%d",st.s[i]);
    }
}




