//to swap a alternate
/*
1,first we have to create and initialize an array that we want to alternate and pass it in the function 
2, then we can pass the array and its size, then run a loop by which we can traverse inside the loop and now the loop check whether the following element is inside the array or not
3, upon completion, the element ai and ai+1 is swapped so we have to run i=i+2 in the loop
the program can be executed then*/



#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"The value of array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(arr[i]<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};
    swapAlternate(even,8);
    print(even,8);
    //simillarly odds can also be alternated the same way

    return 0;

}