#include <iostream>
using namespace std ;
void charcheck(char chr){
   if(chr>=65 && chr<=90)
    cout<<"Ur character is capital";
       else if (chr>=97 && chr<=122)
           cout<<"Ur character is small";
       else
    cout<<" Ur character is Unknown";
}
int main()
{ char ch;
cout<<"Enter a character=\n";
cin>>ch;
charcheck(ch);
return 0;
}
