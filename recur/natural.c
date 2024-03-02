#include<stdio.h>

int natural(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+natural(n-1);
    }
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int ans=natural(n);
    printf("The sum is %d",ans);
    return 0;

}