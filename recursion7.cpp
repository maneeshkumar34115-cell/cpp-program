//binary search by recursion 
#include<iostream>
using namespace std ;

bool BinarySearch(int arr[],int s,int e,int k){
    //base case ,element not found 
    if(s>e){
        return false;
    }
    int mid = (s+e)/2;

    //recursive relation 
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return BinarySearch(arr,mid+1,e,k);
    }else{
        return BinarySearch(arr,s,mid-1,k);
    }
   

}

int main(){
    int arr[]={1,2,3,5,7,8,9,10};
    int size = 10;
    int k = 8;
    cout<<"it is the result of this "<<BinarySearch(arr,0,9,k)<<endl;
    return 0;
}