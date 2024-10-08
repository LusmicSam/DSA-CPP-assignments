//Ques 1: You are given an array of integer and target integer now you have to tell it posible to select two elements from an array such that their sum is equal to target. If it is possible then print YES otherwise print NO. Sample testcase arr :[2,7,11,15], target = 9 output : YES . Write code that work in O(n^2) complexity and O(n*logn) complexity. Take all the required input from user.

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// O(n^2) Brute-force solution
bool twoSumQuadratic(vector<int>& arr, int target) {
    int n = arr.size();
   
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}

// O(n log n) efficient solution
bool twoSumEfficient(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end()); // Sort the array - O(n log n)
    
    int left = 0, right = arr.size() - 1;

    // use two-pointer 
    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return true;
        } else if (sum < target) {
            left++; 
        } else {
            right--; 
        }
    }

    return false;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int choice;
    cout << "Choose the approach:\n";
    cout << "1. O(n^2) Brute-force\n";
    cout << "2. O(n log n) Efficient\n";
    cin >> choice;

    bool result = false;
    
    if (choice == 1) {
        result = twoSumQuadratic(arr, target);
    } else if (choice == 2) {
        result = twoSumEfficient(arr, target);
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
