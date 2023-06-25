#include <iostream>
using namespace std ;
int main (){
    int n , counter = 0 ;

    cout << " enter an integer number : \n" ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++){
        if (i%2==0){
            counter++ ;
              cout << " even number is = " << i << endl;

        }

        return 0 ;

    }

}