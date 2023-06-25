#include<iostream>
using namespace std ;
int main(){
int n , x ,max1, max2,c=0;
cout<<" tedad adad ra vared konid "<<endl;
cin>>n;
while( c < n ){
cout<<" adade morede nazar ra vared konid "<<endl;
cin>>x;
c++;
if(c==1){
max1=max2=x;
}
if(c==2){
if (x<max1) max2 = x;
}
if(x>max1){
max2=max1;
max1=x;
} else if(x>max2){
max2 = x;
}
cout<<"bozorgtrin adad : "<<max1<<endl;
cout<<"dovomin bozorgtrin adad : "<<max2<<endl;
}
cout<<endl;
cout<<"bozorgtrin adad : "<<max1<<endl;
cout<<"dovomin bozorgtrin adad : "<<max2<<endl;
return 0;}