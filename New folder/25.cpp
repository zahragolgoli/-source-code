#include <iostream>
using namespace std;
int main(){
    int num , sum=0 ;
    cout << "enter an integer number :\t" ;
    cin >> num ;
    while (num>0)
    {
        sum+=(num%10);
        num/=10;
    }
    cout << "sum of digits :\t" <<sum ;
    return 0 ;

}