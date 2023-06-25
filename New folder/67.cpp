#include <iostream>
using namespace std ;
bool isprime (int a);
int main(){
    for (int i =2 ;i<100;i++){
        if (isprime(i)){
            cout << i << "\t";
        }
    }
    return 0 ;
}
bool isprime (int a){
    int counter =0;
    for ( int i=2;i<=a;i++){
        if(a%i==0){
            counter++;
        }
    }
    if (counter==1){
        return true ;
    }
    else return false;
}