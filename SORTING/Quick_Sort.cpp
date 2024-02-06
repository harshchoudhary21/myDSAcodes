#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
          while(arr[j]>pivot&&j>=low+1){
            j++;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp2 = arr[low];
    arr[low] = arr[j];
    arr[j] = temp2;
    return j;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        quick_sort(arr,low,pIndex-1);
        quick_sort(arr,pIndex+1,high);
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
 
 quick_sort(arr, 0, n - 1);

 cout<<"Array after sorting: ";
 for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
 }



}