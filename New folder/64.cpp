#include <iostream>
using namespace std ;
int power(int a,int b){
if(b==0)
return 1;
return (a*power(a,b-1));
}
int main(){
int num1,num2;
cout<<"Enter 2 numbers\n";
cin>>num1>>num2;
cout<<power(num1,num2);
return 0;
}