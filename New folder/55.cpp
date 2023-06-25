#include <iostream>
using namespace std ;
int Maghloob(int a){
int R, temp=0;
while(a>0){
R=a%10;
temp=(temp*10)+R;
a/=10;
}
return temp;
}
int main()
{
int Mgh,counter=0;
for(int i=100;i<=999;i++){
Mgh=Maghloob(i);
if(Mgh==i){
cout<<i<<endl;
counter++;
}
}
cout<<"counter is=\n"<<counter;
return 0;
}