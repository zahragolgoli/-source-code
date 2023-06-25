#include<iostream>
using namespace std ;
void separate(double a){
int a1 = a ;
double x = a - a1;
cout<<x<<endl;
int b = x*100;
cout<<b<<endl;
while(b%10==0)b=b/10 ;
cout<<" ghesmat sahih barabr ast ba : "<<a1<<"\n ghesmat ashari barabr ast ba : " <<b;
}
main(){
double x;
cout<<"enter a number:";
cin>>x;
separate (x);
return 0;
}