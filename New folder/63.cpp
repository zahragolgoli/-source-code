#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "please enter number" << endl;
        cin >> num;

        if (num < 1000) {
            num *= 2;
            cout  << num << endl;
        }

    } while (num > 1000);

    cout << "your number is bigger than 1000 " << endl;

    return 0;
}