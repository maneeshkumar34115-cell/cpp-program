//Given an array nums of distinct integers, return all the possible permutations. 
//You can return the answer in any order.
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print(string &nums,vector<string>& man,int index){
//base case 
if(index >= nums.size()){
    man.push_back(nums);
    return ;
}
for(int j = index;j<nums.size();j++){
    swap(nums[index],nums[j]);
    //recursive call
    print(nums,man,index+1);
    //backtraking 
    swap(nums[index],nums[j]);
}
}
int main(){
    string nums= "abc";
    vector<string>man;
    int index = 0;
     print(nums,man,index);
     for(string &S:man){
        cout<<S<<endl;
     }
    return 0;
}