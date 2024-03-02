#include<stdio.h>

int triangle(int n){
    if(n<=0){
        return;
    }
    else{
        triangle(n-1);
        for(int i=1;i<=n;i++){
            printf("*\t");
        }
        printf("\n");
    }
}
int main(){
    triangle(7);
    return 0;
}