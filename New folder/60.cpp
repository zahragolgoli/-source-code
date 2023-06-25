#include <iostream>
using namespace std ;
long int fact(unsigned int a){
if (a==1)
return 1;
return (a*fact(a-1));
}
int main(){
int num;
cout<<"Enter a number=\n";
cin>>num;
cout<<fact(num);
return 0;}