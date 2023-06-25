#include<iostream>
using namespace std;
long int fact(int number){
int f=1;
for (int i=1;i<=number;i++)
f*=i; // f=f*i;
return f;
}
void low_digit(int a){
int remain=0;
while(a>0){
remain=a%10;
if(remain!=0){
cout<<"The low digit of factorial is=\n"<<remain<<endl;
break;
}
a/=10;
}
}
int main(){
int num,fct;
cout<<"Enter a number=\n";
cin>>num;
fct=fact(num);
cout<<"The factorial is=\n"<<fct<<endl;
low_digit(fct);
return 0;}