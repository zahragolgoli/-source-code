#include <iostream>
using namespace std ;
int prime(int num){
int c=0;
for(int i=1;i<=num;i++){
if (num%i==0)
c++;
}
if(c==2)
return 1;
else
return 0;
}
int main()
{ int n;
bool flag;
cout<<"Enter a number=\n";
cin>>n;
flag=prime(n);
if(flag==1)
cout<<"Ur number is prime";
else
cout<<"Ur number is not prime";
return 0;}