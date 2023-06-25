#include<iostream>
using namespace std;
int main(){
int num,yekan,dahgan;
cout<<"Enter a number=\n";
cin>>num;
while(num!=0){
yekan=num%10;
dahgan=(num/10)%10;
if(yekan==dahgan)
cout<<num<<endl;
cout<<"Enter a number=\n";
cin>>num;
}
return 0;}