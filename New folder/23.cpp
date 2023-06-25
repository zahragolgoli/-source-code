#include <iostream>
using namespace std ;
int main (){
    int n , num , min , max , sum =0 ,i=2;
     float avg =0 ;
      cout << " Enter the number of numbers : \n" ;
      cin >> n ;

      if( n==0)
         return 0 ;
          cout << " enter your  number :\n";
          cin >> num ;
           min = num;
           max = num;
           sum = num;
           while( i<=n){
            cout <<"enter your  number :\n";
            cin >> num ;
            if (num>max)
               max=num;
               else if ( num < min )
               min=num ;
               sum+=num;
               i++;
           }
             avg = (float) sum/n;
             cout << "avg is =  "<< avg << " "<<endl;
             cout << "max is =  "<< max << " "<<endl;
             cout << "min is =  "<< min ;
    return 0 ;
}