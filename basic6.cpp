//febonacci series nby recursion 
#include<iostream>
using namespace std;

int febonacci(int n){
	//base case 
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	//recursive relation
	int small=febonacci(n-1)+febonacci(n-2);
	return small;
}
int main(){
	int souad;
	cout<<"enter a number";
	cin>>souad;
	cout<<"febonacci"<<febonacci(souad)<<endl;
	return 0;
}
