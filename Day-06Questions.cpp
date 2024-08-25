//Question 1 ,2,3
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;
    int arr[size];
    int sum=0,even_count=0,odd_count=0;
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]&1){
            odd_count++;
        }else{
            even_count++;
        }
    }
    cout<<"Sum of the array: "<<sum<<endl;
    cout<<"Number of even numbers: "<<even_count<<endl;
    cout<<"Number of odd numbers: "<<odd_count<<endl;
        int even[even_count];
        int odd[odd_count];
        int e=0,o=0;
        for(int i=0;i<size;i++){
            if(arr[i]&1){
                odd[o]=arr[i];
                o++;
            }else{
                even[e]=arr[i];
                e++;
            }
        }
        int sumo=0,sume=0;
        cout<<"Even element array: ";

    for(int i=0;i<even_count;i++){
        cout<<even[i]<<" ";
        sume+=even[i];
    }
    cout<<endl;
     cout<<"Odd element array: ";
    for(int i=0;i<odd_count;i++){
        cout<<odd[i]<<" ";
        sumo+=odd[i];
    }
    cout<<endl;
    cout<<"Sum of even numbers: "<<sume<<endl;
    cout<<"Sum of odd numbers: "<<sumo<<endl;


}