#include <iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr={7,8,4,9,3};
    int len;
    for(int i=0;i<4-1;i++){
        for(int j=i+1;j<4;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    int kth=4;
    cout<<"Max "<<kth<<" no is "<<arr[4-kth];

}