#include<iostream>
using namespace std;
int fib (int number){
if(number==1 || number==2)
return 1;
return (fib(number-1) + fib(number-2));
}
int main(){
int num,fct;
cout<<"Enter a number=\n";
cin>>num;
cout<<fib(num);
return 0;
}