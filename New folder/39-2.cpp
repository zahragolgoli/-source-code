#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    do {
        cout << "Enter a number (enter 0 to stop): ";
        cin >> num;
        if (num % 10 == 3) {
            count++;
        }
    } while (num != 0);

    cout << "Number of numbers with digit 3 in the ones place: " << count << endl;

    return 0;
}