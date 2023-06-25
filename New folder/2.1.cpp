#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (i <= n) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "BuzzBizz" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Buzz" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Bizz" << endl;
        }
        else {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}