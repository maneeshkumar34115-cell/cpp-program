//it is a program of factorial by using recursion
#include<iostream>
using namespace std;
 int factorial(int n){
 	//base case
 	if (n==0)
 	return 1;
 	//recursive call
 	int small=n*factorial(n-1);
 	return small;
 }
 int main(){
 	int num;
 	cout<<"enter a number= ";
 	cin>>num;
 	cout<<"factorial"<<factorial(num)<<endl;
 	
 	return 0;
 	
 }
