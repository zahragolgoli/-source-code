#include<iostream>
#define size 10 
using namespace std;
int main(){
int num[size],Max_index=0,Min_index=0;
for (int i=0;i<size;i++){
cout<<"Enter number["<<i+1<<"]=\n";
cin>>num[i];}
int Max=num[0];
int Min=num[0];
for(int i=1;i<size;i++){
if(num[i]>Max){
Max=num[i];
Max_index=i;
}
else if(num[i]<Min){
Min=num[i];
Min_index=i;
}
}
cout<<"Max is= "<<Max<<endl;
cout<<"Max position is= "<<Max_index+1<<endl;
cout<<"Min is= "<<Min<<endl;
cout<<"Min position is= "<<Min_index+1;
return 0;
}