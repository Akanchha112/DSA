#include <iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,8> arr={2,1,2,0,0,1,2,0};
    int c0=0,c1=0,c2=0;
    for(int i=0;i<8;i++){
        if(arr[i]==0) c0++;
        else if(arr[i]==1) c1++;
        else c2++;
    }
    int k;
    for(int i=0;i<c0;i++) arr[k++]=0;
    for(int i=0;i<c1;i++) arr[k++]=1;
    for(int i=0;i<c2;i++) arr[k++]=2;
    

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}