#include <iostream>
using namespace std ;
int main(){

    int arr[10],index1,index2;
    for (int i=0;i<10;i++){
        cin >> arr[i];
    }
    int max1=arr[0];
    index1=0;
    int max2=arr[1];
    index2=1;
    
    if (max2>max1){
        max1=max2;
        max2=arr[0];
        index1=1;
        index2=0;
    }
    
    for(int i=0;i<10;i++){
        if(arr[i]>max1){
            max2=max1;
            index2=index1;
            max1=arr[i];
            index1=i;
        }
        else if (arr[i]>max2)
        {
            max2=arr[i];
            index2=i;
        }
    }
    cout << max1 << " " << index1+1 <<endl;
    cout << max2 << " " << index2+1 <<endl;
    return 0;
}