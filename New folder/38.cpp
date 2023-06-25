#include <iostream>
#include <cmath>
using namespace std;

  int main() {
  int  num;
    cout << " inter a number  ";
    cin >> num;

    if (num < 10) {
        cout <<num*(-1) << endl;
    } else if (num < 100) {
        cout << pow(num, 2) << endl;
    } else {
        cout << pow(num, 3) << endl;
    }

    return 0;
}