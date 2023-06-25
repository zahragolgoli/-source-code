#include <iostream>
using namespace std ;
int gcd(int a,int b){
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main(){
int num1,num2;
cout<<"Enter 2 numbers\n";
cin>>num1>>num2;
cout<<gcd(num1,num2)<<endl;
return 0;}