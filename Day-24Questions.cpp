 //You are given a binary array. Your task is to find the maximum number of consecutive ones in array.
//Input :- arr :[1,1,0,1,1,1]

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr) {
    int max_count = 0; 
    int count = 0;     

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++; 
            max_count = max(max_count, count); 
        } else {
            count = 0; 
        }
    }
    return max_count;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the binary array (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMaxConsecutiveOnes(arr);
    cout << "The maximum number of consecutive 1s is: " << result << endl;

    return 0;
}
