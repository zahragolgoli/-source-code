#include <iostream>
using namespace std ;
int main (){
    float a,b,c;
    cin >> a>>b>>c;
    if(a*a==b*b+c*c){
        cout << " yes :) \n" ; 
    }
    else if (b*b == a*a + c*c)
    {
        cout << " yes :) \n" ; 
    }
    else if (c*c == a*a + b*b)
    {
        cout << "  yes :) " ;
    }
    else{
        cout << "no ^-^ " ;
    }
    return 0 ;
}