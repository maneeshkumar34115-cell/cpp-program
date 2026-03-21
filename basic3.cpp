//progrm of two the power of n 
#include<iostream>
using namespace std;
 
 int power(int n){
 	//base case 
 	if (n==0)
 	return 1;
 	//recursive relation 
 	int small=2*power(n-1);
 	return small;
 }
int main(){
	int m;
	cout<<"enter a number =";
	cin>>m;
	cout<<"two the power is = "<<power(m);
	
	
	return 0;
}
