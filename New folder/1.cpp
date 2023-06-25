#include <iostream>
using namespace std ;
int main (){
    int n , x , counter = 0 , maximum ;
    cout << " tedad adad ra vared konid \n: " << endl ;
    cin >> n ;
    while ( counter < n ) {
        cout << " adad mored nazar ra vared konid :\n"<< endl;
        cin >> x ;
        if ( counter == 0 ) maximum = x ;
        if ( x > maximum ) maximum = x ;
        counter++ ;
        cout << "tedad adad vared shode " << counter << "\t maximum = " << maximum << endl;
    } 
    cout << " maximum = " << maximum ;

     return 0;
}