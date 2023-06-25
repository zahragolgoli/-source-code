#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int odd[10];
    int count = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            odd[count] = arr[i];
            count++;
        }
    }

    cout << "Even numbers in the array: ";
    for (int i = 0; i < count; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}