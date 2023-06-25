#include <iostream> 
using namespace std ;
int main (){
    float a,sum=0.0;
    for (int i=1 ;i<=10;i++){
        cin>>a;
        sum+=a;
    }
    cout << sum ;
    return 0 ;
}