#include<iostream>
#include <cmath>
using namespace std;
int main(){
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<5;i++){
    //     for(int j=5;j>=1;j--){
    //         if(j<=i){
    //             cout<<" *";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<5;i++){
        for(int j=1;j<=7;j++){
            if(j==4){
                cout<<" * ";
            }
            else if(abs(j-4)<i ){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;

}