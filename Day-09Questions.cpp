// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
//     cout<<a<<endl;
//     cout<<*p<<endl;
//     return 0;
// }



// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int *p=arr;
//     for(int i=0;i<5;i++){
//         cout<<*(p+i)<<" ";
//     }
//     return 0;
// }



// Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
//     int **q=&p;
//     cout<<a<<endl;
//     cout<<*p<<endl;
//     cout<<**q<<endl;
//     return 0;
// }