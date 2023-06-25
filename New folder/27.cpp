#include <iostream>
using namespace std ;
int main (){
    int n ,i=1,sum,counter,num;
    cout << " how many numbers u want to enter ?\n";
    cin >> n ;
    while (i<=n){
        cout <<"enter a number :\n" ;
        cin >> num ;
        sum=1;
        for (int j=2 ; j<=(num/2);j++){
            if (num%j==0)
            sum+= j ;
        }
        if (sum==num){
            cout << "your number is compelete\n";
            counter++;
        }
        else
        cout <<"your number is not cmpelete\n";
        i++;
    }
    cout <<"number of compelete numbers :" << counter ;

    return 0 ;
}