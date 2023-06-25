#include <iostream>
using namespace std ;
int main(){
    int num ,digit , fact=1 , sum=0 ;
    cout << "enter an integer number :\n" ;
    cin >> num ;
    while(num>0){
        digit=(num%10);
        fact=1 ;
        for(int i=1 ; i<=digit ; i++)
        fact=fact*i;
        sum+=fact ;
        num/=10;
    }
    cout << "sum of digits : \n" <<sum;
     return 0 ;
}