#include<iostream>
using namespace std;
int main(){
    int i,n,num,flag=0;
    int a[n];
    cout<<"Enter the number of elements present in the array:\n";
    cin>>n;
    //enter the array
    for(i=0;i<=n;i++){
        printf("a[%d]=",i);
        cin>>a[i];
    }
    cout<<"Enter the number you want to find:";
    cin>>num;
    for(i=0;i<=n;i++){
        if(num==a[i]){
            flag++;
        }
        else{
            break;
        }
    }
    if(flag++){
        printf("the number is in %d index",i);
    }
    else{
        cout<<"the number is not present in the index";
    }
    return 0;
}