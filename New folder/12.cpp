#include<iostream>
using namespace std ;
void tabe(double a){
int a1 = a ;
a = a - a1;
int b=0;
while(a>0.0001 && a<0.9999){
a*=10;
cout<<"a : "<<a<<endl;
b=b*10+(int)a;
cout<<"b : "<<b<<endl;
a=a-(int)a;
cout<<"a : "<<a<<endl<<endl;
}
if(a>0.9999)b++;
cout<<" ghesmat sahih barabr ast ba : "<<a1<<"\n ghesmat ashari barabr ast ba : " << b << endl ;
}
main(){
double x;
cout<<"enter a number:";
cin>>x;
tabe (x);
return 0;
}