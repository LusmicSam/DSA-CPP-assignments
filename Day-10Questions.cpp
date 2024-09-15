// Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

// Example:

// Input: {1, 5, 3, 9, 2}
// Output: 9
#include<bits/stdc++.h>
using namespace std;
int findMax(const int arr[], int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;//maximus prime has come be ware cypher school...
}
int main(){
    int arr[]={1,5,3,9,2};//uff random i am bored ...
    int size=sizeof(arr)/sizeof(arr[0]);//useless bit like it in some cases
    cout<<findMax(arr,size)<<endl;
    return 0;
}

// Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

// Example:

// Input: "A man, a plan, a canal, Panama"
// Output: true
// #include<bits/stdc++.h>
// using namespace std;
// //use reverse string and compare it with the original string
// bool isPalindrome(const string &str){
//     string s="";
//     for(char c:str){
//         if(isalpha(c)){
//             s+=tolower(c);
//         }
//     }
//     string rev=s;
//     reverse(rev.begin(),rev.end());
//     return s==rev;
// }
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<isPalindrome(str)<<endl;
//     return 0;
// }
