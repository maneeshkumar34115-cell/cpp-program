#include<iostream>
using namespace std;
bool checkpalindrome(string str,int i,int j){
    //base case
    if(i>j){
        return true;
    } 
    if(str[i]!=str[j]){
        return false;
    }else{
        return checkpalindrome(str,i+1,j--);
    }

}
int main(){
string name= "abcde";
cout<<endl;
bool ispalindrome=checkpalindrome( name, 0, name.length()-1);
if(ispalindrome){
    cout<<"it is a plaindrome ";
}else{
    cout<<"it is not a palindrome";
}

    return 0;
}