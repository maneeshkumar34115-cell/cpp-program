//Write a C++ program to calculate the value of a number raised to a power using recursion.
#include<iostream>
using namespace std;
int power(int a,int b){
//base case
if(b==0)
return 1;
//recursive relation 
int small=a*power(a,b-1);

return small;
}
int main(){
int m=3;
int b=4;
int maneesh = power(m,b);
cout<<"a to the power b is "<<maneesh;
    return 0;
}