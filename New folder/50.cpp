#include<iostream>
#define Size 5
using namespace std;
void Swap(int arr_T[][Size],int i,int j){
int temp;
temp=arr_T[i][j];
arr_T[i][j]=arr_T[j][i];
arr_T[j][i]=temp;
}
void transpose(int arr_T[][Size]){
for(int i=0;i<Size;i++){
for(int j=i;j<Size;j++){
Swap(arr_T,i,j);
}
}
}
int main(){
int arr[Size][Size];
for(int i=0;i<Size;i++){
for(int j=0;j<Size;j++){
cout<<"Arr["<<i<<"]["<<j<<"]= ";
cin>>arr[i][j];
}}
for(int i=0;i<Size;i++){
cout<<endl;
for(int j=0;j<Size;j++){
cout<<arr[i][j]<<" ";
}
}
transpose(arr);
cout<<endl<<"Transpose:\n";
for(int i=0;i<Size;i++){
cout<<endl;
for(int j=0;j<Size;j++){
cout<<arr[i][j]<<" ";
}
}
return 0;
}