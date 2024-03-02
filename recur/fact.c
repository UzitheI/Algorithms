#include<stdio.h>

int factorial(int n){
    if( n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n,facto;
    printf("Enter the number:");
    scanf("%d",&n);
    facto=factorial(n);
    printf("factoral=%d",facto);
    return 0;
}