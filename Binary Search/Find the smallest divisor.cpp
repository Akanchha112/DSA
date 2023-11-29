#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int maxi(vector<int>& arr) {
    int m = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        m = max(arr[i], m);
    }
    return m + 1;
}

int divi(vector<int>& arr, int mid) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        count += ceil(double(arr[i]) / double(mid));
    }
    // cout << mid << " " << count << " / ";
    return count;
}

int smallestDivisor(vector<int>& arr, int limit) {
    int end = maxi(arr);
    int start = 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        int div = divi(arr, mid);
        if (div <= limit) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    // Test cases
    vector<int> test1 = {4, 27, 30, 9, 37, 44};
    int limit1 = 11;
    cout << "Test Case 1: " << smallestDivisor(test1, limit1) << endl; // Expected output: 10

    vector<int> test2 = {1, 2, 3, 4, 5};
    int limit2 = 5;
    cout << "Test Case 2: " << smallestDivisor(test2, limit2) << endl; // Expected output: 1

    vector<int> test3 = {10, 20, 30, 40, 50};
    int limit3 = 7;
    cout << "Test Case 3: " << smallestDivisor(test3, limit3) << endl; // Expected output: 10

    return 0;
}
