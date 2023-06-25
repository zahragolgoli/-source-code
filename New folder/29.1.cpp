#include <iostream>
using namespace std;

int main() {
    int num = 1; 
    while(num != 0) {
        cout << "Enter an integer \t *press 0 to exit* : ";
        cin >> num;
        if(num != 0 && num / 10 == num % 10) {
            cout << num << " :) " << endl;
        }
    }
    return 0;
}