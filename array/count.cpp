#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={1,4,3,2,2};
    for(int i=0;i<5;i++){
        int t=count(nums.begin(),nums.end(),nums[i]);
        if(t>=2){
            cout<<"Number is duplicate  "<<nums[i];
            break;
        }
    }
}