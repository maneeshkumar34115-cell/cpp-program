//bubble sort by using recursion 
#include<iostream>
using namespace std;
void Bubblesort(int arr[],int n){
    //base case
    if(n==0 || n==1){
        return ;
    }
    //recursive call;
    for(int i = 0 ; i < n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return Bubblesort(arr,n-1);
}
int main(){
 int arr[]={1,5,7,8,9,3};
 int n= 6;
 Bubblesort(arr,n);
 for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
 }

    return 0;
}