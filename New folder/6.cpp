#include<iostream>
using namespace std ;
int main(){
int i , n ;
long double s=1 , m=1 ,x ,k,sum=0 ;
cout<<"tedad jomalat ra vared konid"<<endl;
cin>>n;
cout<<"meghdar x ra vared konid"<<endl;
cin>>x;
for( i=1 ; i<=n ; i++){
s=s*x;
m=m*i;
k=s/m;
sum=sum+k;
s=s*(-1);
cout<<"hasele jam ta in lahze = "<<sum<<endl;
}
cout<<"hasele jame nahaii = "<<sum<<endl;
return 0;
}