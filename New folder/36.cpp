#include <iostream>
using namespace std ;
int main (){
    int a , counter=0 ;
    cin >>a;
    for (int i=2;i<=a;i++){
        if(a%i==0){
            counter++;
        }
    }
    if (counter==1){
        cout << "prime" ;
    }
    else{
        cout << " not prime " ;
    }
    return 0;
}