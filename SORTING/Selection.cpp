#include<bits/stdc++.h>
using namespace std;
//In selection sort we select minimum of the entire array
void selectionSort(int arr[],int n){
    int min;
    for(int i = 0; i <= n-2; i++){
        min = i;
        for(int j = i; j <n; j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
 selectionSort(arr,n);
 cout<<"Array after sorting: ";
 for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
 }



}