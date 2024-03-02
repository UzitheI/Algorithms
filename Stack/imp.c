#include<stdio.h>
#include<stdlib.h>

#define size 5

struct stack{
    int s[size];
    int top;
}st;

int stfull(){
    if(st.top>=size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int item){
    st.top++;
    st.s[st.top]=item;
}
int stempty(){
    if(st.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int pop(){
if(stempty){
    print('full');
}
else{
    int item;
    item=st.s[st.top];
    st.top--;
    return (item);
}
}

