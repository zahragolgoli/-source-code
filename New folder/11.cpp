#include <iostream>
using namespace std;
int main() {
int n , g=0 ;
double avg ,x, sum = 0 ,min=20;
cout<<"tedad daneshjuyan class ra vared konid \n";
cin>>n;
for (int i=0 ; i<n ; i++ ){
cout<<"nomre danhsjue morede nazar ra vared konid \n";
cin>>x;
if(x>=10) g++;
if( min>x ) min = x ;
sum = sum + x ;
}
avg=sum/n;
cout<<" moadele class = "<< avg <<endl;
cout<<"tedad ghabuli ha = "<< g <<endl;
cout<<"paiin tarin nomre = "<< min <<endl;
return 0;
}