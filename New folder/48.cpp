#include<iostream>
using namespace std;
int main(){
int num[4][4],Max;
for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
cout<<"Number["<<i<<"]["<<j<<"]\n";
cin>>num[i][j];
}
}
for(int i=0;i<4;i++){
Max=num[i][0];
for(int j=1;j<4;j++){
if(num[i][j]>Max){
Max=num[i][j];
}
}
cout<<"Max of row "<<i+1<<" is= "<<Max<<endl;
}
return 0;
}