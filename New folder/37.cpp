#include <iostream>
using namespace std ;
int main(){
    for ( int a=2;a<100;a++){
        int counter=0;
        for(int i=2;i<=a;i++){
            if(a%i==0){
                counter++;
            }
        }
        if(counter==1){
            cout <<a<< " is prime\n";
        }
        else{
            cout <<a<<" is not prime\n";
        }
    }
    return 0 ;
}