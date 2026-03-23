//reverse a string by uisnfg recursion 
#include<iostream>
using namespace std;

void reverse(string& str,int i,int j){
    //base case
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive relation 
    reverse(str,i,j);


}
int main(){
   
string name = "Maneesh";
reverse(name,0,name.length()-1);
cout<<name<<endl;

    
    return 0;
}

