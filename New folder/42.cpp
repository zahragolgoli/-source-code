#include <iostream>
using namespace std ;
int main (){
    int a ;
    do {
        cin >>a;
        int copy =a,sum=0;
        while(copy>0){
            sum+=copy%10;
            copy/=10;
        }
        cout <<a<<" = "<<sum<<endl;

    }
    while (a!=0);
    return 0;
}