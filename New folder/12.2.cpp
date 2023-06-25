#include <iostream>
using namespace std;

void separate(double num) {
   int a = (int)num;
   double b = num - a;
   cout << "Integer part: " << a << endl;
   cout << "Fractional part: " << b << endl;
   cout << ":) "<<endl;
}

int main() {
   double num;
   
   cout << "Enter a number: ";
   cin >> num;
   
   separate(num);
   
   return 0;
}