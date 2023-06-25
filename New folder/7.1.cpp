#include <iostream>
using namespace std;
int main() {
int x , p,q=0,r ;
cout<<"maghsum ra vared konid : "<<endl;
cin>>x;
cout<<"maghsum alayh ra vared konid : "<<endl;
cin>>p;
while( x >= 0 ) {
r=x;
x=x-p;
if ( x>=0 ){
q++;
r=x;
}
cout<<"baghimande ta inja barabar ast ba : "<< r <<endl;
cout<<"khareje ghesmat ta inja barabar ast ba : "<< q <<endl;
cout<<endl;
}
cout<<"baghimande nahaii = "<< r <<endl;
cout<<"khareje ghesmat nahaii = "<< q <<endl;
return 0;
}