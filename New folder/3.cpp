#include <iostream>
using namespace std;

int main() {
    int n, point;
    cout << "Enter the number of athletes: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter the point of athlete " << i << ": ";
        cin >> point;
        switch (point) {
            case 1:
            case 2:
                cout << "athlete " << i << " is weak." << endl;
                break;
            case 3:
                cout << "athlete " << i << " is average." << endl;
                break;
            case 4:
            case 5:
                cout << "athlete " << i << " is good." << endl;
                break;
            default:
                cout << "Invalid number." << endl;
                break;
        }
    }
    return 0;
}