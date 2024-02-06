#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
 for(int i = n-1; i >=1; i--){
    int didSwap = 0;
    for(int j = 0; j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            didSwap =1;
        }
    }
    if(didSwap == 0){
        break;
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
 bubbleSort(arr,n);
 cout<<"Array after sorting: ";
 for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
 }



}