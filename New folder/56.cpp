#include <iostream>
using namespace std ;
long int Fact(int a){
int temp=1;
for(int i=1;i<=a;i++)
temp*=i;
return temp;
}
int main()
{
int num;
cout<<"Enter a number=\n";
cin>>num;
cout<<"Ur factorial is=\n"<<Fact(num);
return 0;}