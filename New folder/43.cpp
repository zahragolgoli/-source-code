#include <iostream>
using namespace std ;
int main (){
    int a,maghloob=0;
    cin>>a;
    while(a>0){
        maghloob*=10;
        maghloob+=a%10;
        a/=10;
    }
    cout << maghloob;
    return 0;
}