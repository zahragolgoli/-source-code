#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n, number;
   double sum = 0, average;
   
   cout << "Enter an integer: ";
   cin >> n;
   
   int arr[5];
   for (int i = 0; i < 5; i++) {
      cout << "Enter an integer greater than " << n << ": ";
      cin >> number;
      while (number <= n) {
         cout << "Enter an integer greater than " << n << ": ";
         cin >> number;
      }
      arr[i] = number;
   }
   
   for (int i = 0; i < 5; i++) {
      sum += arr[i];
   }
   
   average = (double) sum / 5;
   cout << "The average of the 5 numbers is: " << average << endl;
   
   return 0;
}