#include <iostream>
using namespace std ;
int main (){
    int j ,counter;
    for(int i=100;i<1000;i++){
        counter=0;
        for (j=1;j<1;j++){
            if(i%j==0)
            counter++;
        }
        if(counter==2)
        cout <<i<<"is prime . \t" ;

    }
    return 0 ;
}