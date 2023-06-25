#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int maximum = INT_MIN ;
    for (int i = 0; i < n; i++) {
        int number;
        cout << "Enter element " << i+1 << ": ";
        cin >> number;

        if (number > maximum) {
            maximum = number;
        }
    }

    cout << "Maximum number is: " << maximum << endl;

    return 0;
}