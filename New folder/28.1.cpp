#include <iostream>
using namespace std;

int main() {
    int i, j, n;
    for(i=100; i<=999; i++) {
        n = 0;
        for(j=2; j<=i/2; j++) {
            if(i % j == 0) {
               n = 1;
                break;
            }
        }
        if(n == 0) {
            cout << i << " ";
        }
    }
    cout << " :) " ;
    return 0;
}