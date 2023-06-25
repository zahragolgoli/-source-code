#include <iostream>
using namespace std ;
int main (){
    int input[10],even[10],odd[10],counter_even,counter_odd;
    for(int i=0;i<10;i++){
        cin>> input[i];
    }
    for (int i=0;i<10;i++){
        if (input[i]%2==0){
            even [counter_even]=input[i];
            counter_even++;
        }else{
            odd[counter_odd]=input[i];
            counter_odd++;
        }
    }
    for(int i=0;i<counter_even;i++){
        cout << even[i]<<'\t';
    }
    cout << endl ;
    for (int i =0;i<counter_odd;i++){
        cout << odd[i] << '\t';
    }
    return 0;
}