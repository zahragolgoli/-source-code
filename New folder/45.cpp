#include<iostream>
#include <math.h>
using namespace std ;
int main (){
int Number, Counter_Digit= 0,Remain, Temp, Sum =0;
cout << "Enter a number = ";
cin >> Number;
Temp = Number ;
while (Temp > 0){
Counter_Digit++;
Temp/=10;
}
Temp = Number;
while (Temp > 0){
Remain = Temp % 10;
Sum += pow(Remain , Counter_Digit); // 1^4 + 2^4 + ....
Temp/=10;
}
if (Sum == Number)
cout << "Ur Number is Armstrong";
else
cout <<"Ur number is not Armstrong";
return 0;}