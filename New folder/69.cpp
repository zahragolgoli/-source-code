#include <iostream>
using namespace std ;
int sum (int n);
int main (){
    for (int i=0;i<100;i++){
        if (sum (i)==i){
            cout<< i << endl;
        }
    }
    return 0;
}
int sum (int n ){
    int s=0;
    for (int i=1;i<n;i++){
        if ( n % i ==0 ) {
             s += i;
        }
    }
    return s;
}