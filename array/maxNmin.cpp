#include <iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr={7,8,4,9,3};
    int maxa=0, mina=100;

    for(int i=0;i<5;i++){
        maxa=max(maxa,arr[i]);
        mina=min(mina,arr[i]);
    }
    
    cout<<"Max-->"<<maxa<<endl;
    cout<<"Min-->"<<mina;
}