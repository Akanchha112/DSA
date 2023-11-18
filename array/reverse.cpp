#include<iostream>
using namespace std;

int main(){
    int arr[]={4,6,7,8};
    int rev[4];


    for(int i=0;i<4;i++){
        rev[3-i]=arr[i];
    }

    
    for(int i=0;i<4;i++){
        cout<<rev[i]<<" ";
    }
    return 0;
}