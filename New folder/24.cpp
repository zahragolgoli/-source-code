#include <iostream>
using namespace std;
int main (){
    int n , f1=1 , f2=1 , f3 ;
    cout << "enter an integer number :\t" ;
    cin >> n ;
    if( n==1 ){
        cout <<f1;
        return 0 ;
    }
    else if ( n==2){
        cout << f1 << "\n" << f2 << endl; 
        return 0 ;
    }
    cout << f1 << "\t" << f2 << endl ;
    for (int i=3 ; i<=n ; i++ ){
        f3=f1+f2 ;
        cout << f3 << endl ;
        f1=f2 ;
        f2=f3 ;
    }
   return 0; 
}

