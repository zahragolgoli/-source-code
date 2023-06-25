#include <iostream>
using namespace std ;
void convert (int s);
int main (){
    int seconds;
    cin >> seconds ;
    convert(seconds);
    return 0;
}
void convert (int s){
    int second,h,m;
    second = s % 60 ;
    h=s/3600;
    m=(s/60)%60;
    cout << "time is "<< h << " : "<<m<<" : "<<second;
}