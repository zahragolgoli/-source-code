#include <iostream>
using namespace std ;
int main (){
    float sum =0.0;
    for(float i=19.0;i>0;i-=2){
        cout <<i/(20-i)<<endl;
        sum+=i/(20-i);
    }
    cout << sum <<endl;
    return 0;
}