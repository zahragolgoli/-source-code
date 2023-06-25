#include <iostream>
using namespace std ;
int main(){
    int a;
    tag : cin >> a;
    if (a<0){
        cout << -a ;
    }
    else if (a>0)
    {
        cout << a*a ;
    }
    else {
        goto tag ;
    }
    return 0 ;
}