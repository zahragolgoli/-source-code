#include<iostream>
using namespace std ;
int tabe (int x ){
int j,k,m,n,t,b=0;
int pnja=x/50 ,sad=x/100 ,dvist = x/200 ,punsd =x/500,hezar=x/1000;
cout <<endl<< pnja<<endl <<sad <<endl << dvist<<endl
<<punsd<<endl <<hezar<<endl;
for(j=0;j<=pnja ;j++)
for(k=0;k<=sad;k++)
for(m=0;m<=dvist;m++)
for(n=0;n<=punsd;n++)
for(t=0;t<=hezar;t++){
if(50*j+100*k+200*m+500*n+1000*t==x){
cout<<" 50 : "<<j<<" 100 : "<<k<<" 200 : "<<m<<" 500 :"<<n<<" 1000 : "<< t<<endl;
b++;
}
}
return b;
}
int main(){
int x,b;
cout<<"mablagh ra vared konid : \n";
cin>>x;
b=tabe(x) ;
cout<<"tedad : "<<b;
return 0 ;
}