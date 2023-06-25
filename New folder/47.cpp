#include<iostream>
#define Size 20
using namespace std;
int main(){
unsigned int num[Size];
int first,second,third;
for(int i=0;i<Size;i++){
cout<<"Enter number["<<i+1<<"]=\n";
cin>>num[i];
}
first=num[0];
second=third=0;
for(int j=1;j<Size;j++){
if(num[j]>first){
third=second;
second=first;
first=num[j];
}
else if (num[j]>second){
third=second;
second=num[j];
}
else if (num[j]>third){
third=num[j];
}}
cout<<"Max 1 is=\n"<<first<<endl<<"max 2 is=\n"<<second<<endl<<"max 3 is=\n"<<third;
return 0;
}