#include <iostream>
using namespace std;

int main() {
    for (int i = 1000; i < 10000; i++) {
        if (i % 3 != 0 && i % 7 == 0) {
            cout << i << " \t";
        }
    }
    return 0;
}