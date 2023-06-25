#include <iostream>
using namespace std ;
int main(){
    long int arr[100],month[12]={};
    for (int i=0;i<100;i++){
        cin>>arr[i];
    }
    for (int i=0;i<100;i++){
        int k =(arr[i]/100)%100;
        month[k-1]++;
    }
    return 0;
}