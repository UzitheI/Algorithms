//trying to find the unique 
//there is an array, and it has n elements,,, n=2m+1 which means it is odd,,,,,,m number comes twice 


//the question is:
/*You have been given an integer with an arraylist{arr} of size N. where N=2m+1,,now in the given arraylist,'M',numbers repeat twice and one number is present only once, you need to find and return that number which is unique in the arraylist

*/



//here we can see that the elements are odd numbers as the elements wil always have a unique element 

//there are multiple ways of finding the answer here, one of them is going to be a brute force method 

/*in brute force 
if the element are
a[5]={1,1,2,2,3};
//we are going to count the occurence of the element, which makes it possible for us to identify the unique element as its count will always be 1*/

/*another method will be the optimizable method where we will at first pass the first element of the array using the arr pointer then the size and we will use them to x or 

we know the concept of xor where if we xor true and true or false and false we will get 0 and then a unique element will give one, thus we will find the unique element using the bitwise operator*/
#include<iostream>
using namespace std;
int findUnique(int* arr,int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
        //here ans will be a unique element because the bitwise or will always give a unique value as we are simply crossing similar terms and giving a unique term here
    }
    return ans;
}
int main(){
    int arr[5]={1,2,1,2,4};
    findUnique(arr,5);
    return 0;
}