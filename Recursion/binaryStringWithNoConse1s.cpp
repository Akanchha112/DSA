// Binary strings with no consecutive 1s.
// For Example:
// Let ‘N'=3, hence the length of the binary string would be 3. 

// We can have the following binary strings with no consecutive 1s:
// 000 001 010 100 101 
#include <iostream>
#include <vector>

using namespace std;

vector<string> attachAtEnd(vector<string>& ans, int n) {
    if (n == 0) {
        return ans;
    }

    int i = 0;
    vector<string> a;

    while (i < ans.size()) {
        if (ans[i].back() == '0') {
            a.push_back(ans[i] + "0");
            a.push_back(ans[i] + "1");
        } else {
            a.push_back(ans[i] + "0");
        }
        i++;
    }

    ans = a;
    return attachAtEnd(ans, n - 1);
}

vector<string> generateString(int N) {
    vector<string> ans = {"0", "1"};
    return attachAtEnd(ans, N - 1);
}

int main() {
    // Test Case 1
    int N1 = 3;
    vector<string> result1 = generateString(N1);
    cout << "Test Case 1: N = " << N1 << endl;
    for (const string& str : result1) {
        cout << str << " ";
    }
    cout << endl;

    // Test Case 2
    int N2 = 4;
    vector<string> result2 = generateString(N2);
    cout << "Test Case 2: N = " << N2 << endl;
    for (const string& str : result2) {
        cout << str << " ";
    }
    cout << endl;

    // Test Case 3
    int N3 = 1;
    vector<string> result3 = generateString(N3);
    cout << "Test Case 3: N = " << N3 << endl;
    for (const string& str : result3) {
        cout << str << " ";
    }
    cout << endl;

    // Test Case 4
    int N4 = 5;
    vector<string> result4 = generateString(N4);
    cout << "Test Case 4: N = " << N4 << endl;
    for (const string& str : result4) {
        cout << str << " ";
    }
    cout << endl;

    // Test Case 5
    int N5 = 0;
    vector<string> result5 = generateString(N5);
    cout << "Test Case 5: N = " << N5 << endl;
    for (const string& str : result5) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
