#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void count(vector<int>& ans, int mod, int low, int high) {
    int a = 0;
    for (int i = 1; i <= 9; i++) {
        a = a * 10 + i;
        if (a >= low && a <= high && a > mod) {
            ans.push_back(a);
            a = a % mod;
        }
        if (a > mod) {
            a = a % mod;
        }
    }
}

vector<int> sequentialDigits(int low, int high) {
    int nl = 0, nh = 0;
    int l = low, h = high;
    while (l > 0) {
        l = l / 10;
        nl++;
    }
    while (h > 0) {
        h = h / 10;
        nh++;
    }
    vector<int> ans;
    for (int i = nl; i <= nh; i++) {
        int mod = pow(10, i - 1);
        count(ans, mod, low, high);
    }
    return ans;
}

int main() {
    // Test Case 1
    int low1 = 100, high1 = 300;
    vector<int> result1 = sequentialDigits(low1, high1);
    cout << "Test Case 1: [" << low1 << ", " << high1 << "] => ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 2
    int low2 = 1000, high2 = 13000;
    vector<int> result2 = sequentialDigits(low2, high2);
    cout << "Test Case 2: [" << low2 << ", " << high2 << "] => ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 3
    int low3 = 50, high3 = 150;
    vector<int> result3 = sequentialDigits(low3, high3);
    cout << "Test Case 3: [" << low3 << ", " << high3 << "] => ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 4
    int low4 = 500, high4 = 1000;
    vector<int> result4 = sequentialDigits(low4, high4);
    cout << "Test Case 4: [" << low4 << ", " << high4 << "] => ";
    for (int num : result4) {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 5
    int low5 = 10000, high5 = 50000;
    vector<int> result5 = sequentialDigits(low5, high5);
    cout << "Test Case 5: [" << low5 << ", " << high5 << "] => ";
    for (int num : result5) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
