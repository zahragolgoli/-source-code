#include <iostream>
using namespace std ;
int main(){
    int grade;
    cout << " enter your grade : \n" ;
    cin >> grade ;
    if ( grade >=18 )
       cout << " excellent" ;
        
        else if (grade >= 16 && grade<18 )
         cout << "good" ;

          else if (grade < 16) 
          cout<<"weak"<<endl;

           return 0 ;
}