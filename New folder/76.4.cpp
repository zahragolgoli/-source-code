#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout <<"enter n:";
    cin >>n;
    if (n>80||n<0){
        cout << "invalid number";
        return 0;
    }
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        if (i==1||i==n||i==j||i+j==n+1)
        cout <<"*";
        else{
            cout <<" ";
            cout <<endl;
        }
        return 0;
    }
}