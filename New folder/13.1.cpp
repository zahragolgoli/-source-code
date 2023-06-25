#include <iostream>
using namespace std ;
 int main (){
    while (1){
        float i , j , rowNum, space , x ;
        cout << " tule yek zele mosalas ra vared konid : " << endl ;
        cin >> rowNum ;
        if (rowNum == -1) break ;
        for ( i=1 ; i<=rowNum; i++)
       { 
        space = rowNum-i;

        for ( j=1 ; j<=space ; j++ ){ cout << " ";}

        for ( j=1 ; j<=(2*i-1); j++ ) { cout << "*";}
         cout << endl ;
       } 
    }

    return 0 ;
 }