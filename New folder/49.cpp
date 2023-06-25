#include<iostream>
using namespace std;
int main(){
const int Size=10;
int num[Size],temp;
for(int i=0;i<Size;i++){
cout<<"Number["<<i+1<<"]=\n";
cin>>num[i];
}
for(int j=0;j<Size;j++){
for(int k=0;k<Size-j-1;k++){
if (num[k]>num[k+1]){
temp=num[k];
num[k]=num[k+1];
num[k+1]=temp;
}
}
}
for(int i=0;i<Size;i++){
cout<<num[i]<<"\t";
}
return 0;
}