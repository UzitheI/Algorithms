#include<stdio.h>
void TOH(int,char,char,char);
int main(){
    int n;
    printf("Enter the number of plates:");
    scanf("%d",&n);
    TOH(n,'o','d','i');
}
void TOH(int n,char A, char B,char C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("move disk %d from %c to %c",n,A,B);
        TOH(n-1,C,B,A);
        return 0;


    }
}

