#include <iostream>
using namespace std ;
int main (){
    int a,b ;
    cin>>a>>b;
    if (a>b){
        swap(a,b);
    }
    if (a<0){
        a=0;
    }
    if (b<0){
        return 0;

    }
    for (int i=a;i<=b;i++){
        long long int p=1;
        for(int j=1;j<=i;j++){
            p*=j;
        }
        cout <<i<<"! = "<<p<<endl;
    }
    return 0;
}