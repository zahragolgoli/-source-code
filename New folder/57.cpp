#include<iostream>
using namespace std;
#define Size 40
int arr[Size];
int Search(int x,int index){
for(int i=0;i<index;i++){
if(x==arr[i])
return 1;
}
return 0;
}
void reader(){
for(int i=0;i<Size;i++){
cout<<"A["<<i<<"]="<<endl;
cin>>arr[i];
if(Search(arr[i],i)){
i--;
cout<<"Duplicate error!"<<endl;}
}
}
void Sort(){
int temp;
for(int j=0;j<Size;j++){
for(int k=0;k<Size-j-1;k++){
if (arr[k]>arr[k+1]){
temp=arr[k];
arr[k]=arr[k+1];
arr[k+1]=temp;
}
}
}
}
void writer(){
for(int i=0;i<Size;i++)
cout<<arr[i]<<" ";
}
int main(){
reader();
Sort();
writer();
return 0;
}