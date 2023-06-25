#include <iostream>
using namespace std ; 
    int ABS(int num){
if(num<0)
num=-1*num;
return num;
}
int main()
{ int n;
cout<<"Enter a number=\n";
cin>>n;
cout<<ABS(n);

    return 0;
}