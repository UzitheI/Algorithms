#include<iostream>
using namespace std;
int main(){
    int arr[4]={2,7,11,23};
    int target=9;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){//j=i+1 to ensure that the number isn't going to check itself twice

        if(arr[i]+arr[j]==9){
            cout<<i<<" "<<j<<endl;
            return 0;
        }
        }
    }
    return 0;
}