#include <iostream>

using namespace std ;

int main (){
    int a,b,temp;
    cout << "enter 2 numbers"<<endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout <<a<<"\n"<<b;
    return 0 ;

}