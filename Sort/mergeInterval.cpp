#include <iostream>

using namespace std;
int main(){
    int arr[4][3] ={{1,2},{2,4},{5,7},{6,8}};
    int start=arr[0][0];
    int end= arr[0][1];
    int a[5][2]={0};
    for(int i=1;i<=4;i++){
        if(arr[i][0]<end){
            end= max(end, arr[i][0]);
        }
        else{
            a[i][0]=start;
            a[i][1]=end;
            start=arr[i][0];
            end=arr[i][1];
        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i][0]<<" "<<a[i][1];
        cout<<endl;
    }
    return 0;
}