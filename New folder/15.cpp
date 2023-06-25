#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"please enter number of rows:";
cin>>n;
int space=2*(n-1);
for(int i=1;i<=n;i++)
{
for(int j=i;j<=space;j++)
{
cout<<" ";
}
for(int k=1;k<=i;k++)
{
cout<<k<<" ";
}
for(int k=i-1;k>=1;k--)
{
cout<<k<<" ";
}
space--;
cout<<endl;
}
return 0;
}