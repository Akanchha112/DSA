#include <iostream>
#include <vector>

int count(std::vector<int>& arr, int n, int x) {
    int start=0,end=n-1,mid;
	int lb=0,ub=-1;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==x){
			lb=mid;
			end=mid-1;
		}
		else if(arr[mid]>x){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	start=0; end=n-1;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==x){
			ub=mid;
			start=mid+1;
		}
		else if(arr[mid]>x){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	int a=ub-lb+1;
	return a;
}

int main() {
    // Example usage
    std::vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 4, 5};
    int x = 2;

    std::cout << "Count of " << x << ": " << count(arr, arr.size(), x) << std::endl;

    // Test Case 1
    // std::vector<int> arr1 = {1, 2, 3, 4, 5};
    // int x1 = 3;
    // std::cout << "Count of " << x1 << ": " << count(arr1, arr1.size(), x1) << std::endl;

    // Test Case 2
    // std::vector<int> arr2 = {1, 1, 2, 2, 2, 2, 3, 4, 5, 5};
    // int x2 = 2;
    // std::cout << "Count of " << x2 << ": " << count(arr2, arr2.size(), x2) << std::endl;

    // Test Case 3
    // std::vector<int> arr3 = {1, 1, 1, 1, 1, 1};
    // int x3 = 1;
    // std::cout << "Count of " << x3 << ": " << count(arr3, arr3.size(), x3) << std::endl;

    // Test Case 4
    // std::vector<int> arr4 = {1, 2, 3, 4, 5};
    // int x4 = 6;
    // std::cout << "Count of " << x4 << ": " << count(arr4, arr4.size(), x4) << std::endl;

    // Test Case 5
    // std::vector<int> arr5 = {};
    // int x5 = 2;
    // std::cout << "Count of " << x5 << ": " << count(arr5, arr5.size(), x5) << std::endl;

    return 0;
}
