#include<iostream>
using namespace std;
bool isprime(int num){
int counter=0;
for(int i=1;i<=num;i++){
if (num%i==0)
counter++;
}
if (counter==2)
return 1;
else
return 0;
}
int main(){
for (int i=2;i<=99;i++){
if (isprime(i))
cout<<i<<" is prime"<<endl;
}
return 0;
}