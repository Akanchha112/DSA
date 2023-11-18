#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,4,6,8,10};
    int arr2[]={0,3,9};
    for(int i=0;i<5;i++){
        if(arr1[i]>arr2[0]){
            int temp=arr1[i];
            arr1[i]=arr2[0];
            arr2[0]=temp;
            sort(arr2,arr2+3);
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}