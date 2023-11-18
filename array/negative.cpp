#include <iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int, 6> arr={4,6,-2,1,-4,-3};
    int k=0;
    for(int i=0;i<6;i++){
        if(arr[i]<0){
            int temp=arr[k]; 
            arr[k]=arr[i]; 
            arr[i]=temp;
            k++;
        }
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}