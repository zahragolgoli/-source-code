#include <iostream>
using namespace std ;
int main (){
    int a,counter=0;
    cin>>a;
    while (a!=0){
        if (a%10==3){
        counter++;
       }
       cin>>a;
    }
    cout << counter;
    return 0;
}