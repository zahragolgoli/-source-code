#include <iostream>
using namespace std ;
int main(){

    int n ;
    int temp=1;
    int i=1;
      
      cout << "enter an integer number\n" ;
      cin >> n ;

      while ( i <= n){
        temp =temp*i;
        i++;
      }
      cout << " factorial is : " << temp << " :) ";

    return 0 ;
}
