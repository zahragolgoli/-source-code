#include <iostream>
using namespace std ;
int main (){
    float i , j , rowNum , space , x ;
    while (1){
        cout << "tule yel zele lozi ra vared konid : " ;
        cin >> rowNum ;
        if (rowNum == -1 ) break;
        for (i=1 ; i<=rowNum ; i++ ){
            space = rowNum-i;

            for ( j=1 ; j<=space ; j++){cout << " " ;}
            for ( j=1 ; j<=(2*i-1); j++){ cout << "*" ;}

            cout << endl ;
        }
        //mosalas paein
        for (i=1 ; i<=(rowNum-1) ; i++){
            space = i ;

            for ( j=1 ; j <=space ; j++) cout << " ";

            for ( j=1 ; j<=(2*(rowNum-i)-1); j++ ) cout << "*" ;
            cout <<endl;

        }
    }

return 0 ;
}