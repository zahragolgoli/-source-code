#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Babble sort 
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter a number to insert: ";
    cin >> n;

    int i = 0;
    while (i < 10 && n > arr[i]) {
        i++;
    }
    for (int j = 9; j >= i; j--) {
        arr[j+1] = arr[j];
    }
    arr[i] = n;

    cout << "New array: ";
    for (int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}