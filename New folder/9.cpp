#include<iostream>
using namespace std ;
int main(){
int n,r;
cout << " enter the desired number : "<< endl ;
cin>>n;
while(n>0){
r=n%10;
n=n/10;
int c =0;
for(int i=1;i<=r;i++){
if(r%i==0)c++;
}
if(c==2)cout<<r<<endl;
}
return 0;
}