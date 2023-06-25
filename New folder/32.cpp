#include <iostream>
using namespace std ;
int main (){
    int a,b,c ;
    cout << "enter 3 numbers\n" ;
    cin >> a >> b >> c ;
    if (b>a){
        swap (a,b);
    }
    if (c>a){
        swap(a,c);
    }
    if (c>b){
        swap(b,c);
    }
    cout << a << " " << b << " " << c ;

    return 0 ;

}