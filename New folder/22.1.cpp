#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << " please enter an integer number : ";
    cin >> n;
    
    for (int i = 0; i < n; i += 2) {
        cout << i << " ";
        count++;
    }
    
    cout << endl << "even number is : "  << count << endl;
    return 0;
}