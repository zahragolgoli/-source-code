#include <iostream>
using namespace std;
long int fact (int n);
void lownum (int n);

int main (){
    int a;
    cin >> a;
    long int b = fact (a);
    lownum (b);
    return 0 ;
}
long int fact (int n){
    long int p =1 ;
    for (int i=1;i<=n;i++){
        p*=i;
    } 
    return p;
}
void lownum(int n){
    int min=9;
    while (n>0){
        int k =n%10;
        if((k,min)&&(k!=0)){
            min=k;
        }
        n/=10;
    }
    cout << min;
}