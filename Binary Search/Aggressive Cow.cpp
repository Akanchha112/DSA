#include <iostream>
#include <vector>
using namespace std;
int countN(vector<int> stalls, int mid) {
    int count = 1;
    int i = 0, j = 1;
    while (j < stalls.size()) {
        cout<<j<<" ";
        if ((stalls[j] - stalls[i]) >= mid) {
            count++;
            i = j + 1;
            // cout << mid << count << " "<<i<<endl;
        }
        j++;
    }
    cout << mid << count << endl;
    return count;
}
int main(){
vector<int> stalls = {0, 3, 4, 7, 9,10};
int mid = 2;
int result = countN(stalls, mid);
cout<<result;
return 0;
}

