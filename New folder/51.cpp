#include<iostream>
using namespace std;
int main(){
int A[2][3],B[3][2],C[2][2]={0};
cout<<"Enter the elements of matrix A=\n";
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
cout<<"A["<<i<<"]["<<j<<"]= ";
cin>>A[i][j];
}
}
cout<<"Enter the elements of matrix B=\n";
for(int i=0;i<3;i++){
for(int j=0;j<2;j++){
cout<<"B["<<i<<"]["<<j<<"]= ";
cin>>B[i][j];
}
}
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
for(int k=0;k<3;k++){
C[i][j] += A[i][k]*B[k][j];
}
}
}
cout<<"A*B=";
for(int i=0;i<2;i++){
cout<<endl;
for(int j=0;j<2;j++){
cout<<C[i][j]<<" ";
}
}
return 0;}