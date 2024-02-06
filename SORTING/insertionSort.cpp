//Takes an element and place it at its correct position
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i =0 ; i < n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}


int main(){
    int n;
 cout<<"Enter the size of Array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements of the array: "<<endl;
 for(int i =0; i < n ; i++){
    cin>>arr[i];
 }
 cout<<"Array before sorting: ";
 for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
 }
 insertionsort(arr,n);

 cout<<"Array after sorting: ";
 for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
 }



}