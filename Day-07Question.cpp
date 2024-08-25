#include<iostream>
using namespace std;
void bubl_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bubl_sort(arr,size);
    cout<<"Array sorted using bubble sort is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    insertionSort(arr,size);
    cout<<endl;
    cout<<"Array sorted using insertion sort sort is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}