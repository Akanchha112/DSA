#include <iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    int arr[5]={3,2,1,6,5}; 
    int k=9;
    // int price;
    
    for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                if(arr[i]+arr[j]==k){
                    cout<<arr[i]<<" "<<arr[j];
                    cout<<endl;
                    break;
                }
            }
        }
    return 0;
}