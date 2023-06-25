#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    cout << "please enter an integer number :\n";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << n << "!" << " = " << factorial << " :) " << endl;
    return 0;
}