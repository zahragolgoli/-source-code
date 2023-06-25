#include <iostream>
using namespace std;
int main(){
    int a[10] ,count[10]={};
    for (int i=0;i<10;i++){
        cin >> a[i];
    }
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i]==a[j]){
                count[i]++;
            }
        }
    }
    for (int i=0;i<10;i++){
        bool flag =1;
        for (int j=0;j<i;j++){
            if(a[i]==a[j]){
                flag=0;
            }
        }
        if (flag){
            cout << '(' <<a[i]<<"):"<< count[i]<<'t';
        }
    }
    return 0;
}