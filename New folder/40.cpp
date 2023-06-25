#include <iostream>
using namespace std ;
int main (){
    int number ;
    for (int i =1 ;i<=9;i++){
        for (int j=1;j<=9;j++){
            for (int k=1;k<=9;k++){
                for (int z=1;z<=9;z++){
                    number=i*100+j*100+k*10+z;
                    cout << number << endl;
                }
            }
        }
    }
    return 0;
}